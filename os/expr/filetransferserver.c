/*
 Soner
 Receive a file over a socket.
  
 Saves it to output.tmp by default.
  
 Interface:
  
 ./executable [<port>]
  
 Defaults:
  
 - output_file: output.tmp
 - port: 12345
 */
 
#define _XOPEN_SOURCE 700
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include <arpa/inet.h>
#include <fcntl.h>
#include <netdb.h> /* getprotobyname */
#include <netinet/in.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <unistd.h>
 
#include <pthread.h>
 
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
 
enum { PORTSIZE = 5 };
 
void* forClient(void* ptr);
void sig_handler(int signo)
{
    if (signo == SIGINT)
        printf("!!  OUCH,  CTRL - C received  by server !!\n");
}
 
int main(int argc, char **argv) {
    struct addrinfo hints, *res;
    int enable = 1;
    int filefd;
    int server_sockfd;
    unsigned short server_port = 12345u;
    char portNum[PORTSIZE];
     
    socklen_t client_len[BUFSIZ];
    struct sockaddr_in client_address[BUFSIZ];
    int client_sockfd[BUFSIZ];
    int socket_index = 0;
     
    pthread_t threads[BUFSIZ];
     
    if (argc != 2) {
        fprintf(stderr, "Usage   ./server  <port>\n");
        exit(EXIT_FAILURE);
    }
    server_port = strtol(argv[1], NULL, 10);
     
    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_INET;       //ipv4
    hints.ai_socktype = SOCK_STREAM; // tcp
    hints.ai_flags = AI_PASSIVE;     // fill in my IP for me
     
    sprintf(portNum, "%d", server_port);
    getaddrinfo(NULL, portNum, &hints, &res);
     
    server_sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (server_sockfd == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }
     
    if (setsockopt(server_sockfd, SOL_SOCKET, (SO_REUSEPORT | SO_REUSEADDR), &enable, sizeof(enable)) < 0) {
        perror("setsockopt(SO_REUSEADDR) failed");
        exit(EXIT_FAILURE);
    }
     
    if (bind(server_sockfd, res->ai_addr, res->ai_addrlen) == -1) {
        perror("bind");
        exit(EXIT_FAILURE);
    }
     
    if (listen(server_sockfd, 5) == -1) {
        perror("listen");
        exit(EXIT_FAILURE);
    }
    fprintf(stderr, "listening on port %d\n", server_port);
     
     
    while (1) {
        client_len[socket_index] = sizeof(client_address[socket_index]);
        puts("waiting for client");
        client_sockfd[socket_index] = accept(
                               server_sockfd,
                               (struct sockaddr*)&client_address[socket_index],
                               &client_len[socket_index]
                               );
        if (client_sockfd[socket_index] < 0) {
            perror("Cannot accept connection\n");
            close(server_sockfd);
            exit(EXIT_FAILURE);
        }
 
        pthread_create( &threads[socket_index], NULL, forClient, (void*)client_sockfd[socket_index]);
         
        if(BUFSIZ == socket_index) {
            socket_index = 0;
        } else {
            ++socket_index;
        }
         
        pthread_join(threads[socket_index], NULL);
        close(filefd);
        close(client_sockfd[socket_index]);
    }
    return EXIT_SUCCESS;
}
void* forClient(void* ptr) {
    int connect_socket = (int) ptr;
    int filefd;
    ssize_t read_return;
    char buffer[BUFSIZ];
    char *file_path;
    char receiveFileName[BUFSIZ];
     
    int ret = 1;
    // Thread number means client's id
    printf("Thread number %ld\n", pthread_self());
    pthread_mutex_lock( &mutex1 );
 
    // until stop receiving go on taking information
    while (recv(connect_socket, receiveFileName, sizeof(receiveFileName), 0)) {
         
        file_path = receiveFileName;
         
        fprintf(stderr, "is the file name received? ?   =>  %s\n", file_path);
         
        filefd = open(file_path,
                      O_WRONLY | O_CREAT | O_TRUNC,
                      S_IRUSR | S_IWUSR);
        if (filefd == -1) {
            perror("open");
            exit(EXIT_FAILURE);
        }
        do {
            read_return = read(connect_socket, buffer, BUFSIZ);
            if (read_return == -1) {
                perror("read");
                exit(EXIT_FAILURE);
            }
            if (write(filefd, buffer, read_return) == -1) {
                perror("write");
                exit(EXIT_FAILURE);
            }
        } while (read_return > 0);
    }
     
    pthread_mutex_unlock( &mutex1 );
     
    fprintf(stderr, "Client dropped connection\n");
    pthread_exit(&ret);
}