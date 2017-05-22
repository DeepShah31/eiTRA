#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <stdlib.h>
#define MSGSZ 128

typedef struct msgbuf     //declare the message structure
{
    long    mtype;
    char    mtext[MSGSZ];
} message_buf;

int main()
{  
    int msqid;
    key_t key;
    int msgflg = IPC_CREAT | 0666;
    message_buf  rbuf;

    key = 234;    //declaring key
    if((msqid = msgget(key,msgflg)) < 0)  //declaring with key and 0666 permission
    {
        perror("msgget");
        exit(1);
    }
    
    /*
     * Receive an answer of message type 1.
     */
    if (msgrcv(msqid, &rbuf,MSGSZ , 1, 0) < 0) {
        perror("msgrcv");
        exit(1);
    }

    /*
     * Print the answer.
     */
    printf("%s\n", rbuf.mtext);
     exit(0);
}
