#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
int main(void)
{
        int fd[2],fd1[2], nbytes,nbytes1;
        pid_t childpid;
        char string[] = "Hello, world!\n";
        int arr[10]={5,4,6,4,3,5,6,7,8,2};

        char readbuffer[80];

        pipe(fd);
        pipe(fd1);
        
        int st=0;
        printf("1.%d-%d\n",fd[0],fd[1]);
        printf("2.%d-%d\n",fd1[0],fd1[1]);

        if((childpid = fork()) == -1)
        {
                perror("fork");
//                exit(1);
        }
        if(childpid == 0)
        {
                /* Child process closes up input side of pipe */

                /* Parent process closes up output side of pipe */
                close(fd[1]);

                /* Read in a string from the pipe */
                int arr1[10];
                nbytes = read(fd[0], arr1, sizeof(arr1));
                int position,swap;
                  for (int c = 0 ; c < 10 ; c++ )
                   {
                      position = c;
                 
                      for ( int d = c + 1 ; d < 10 ; d++ )
                      {
                         if ( arr1[position] > arr1[d] )
                            position = d;
                      }
                      if ( position != c )
                      {
                         swap = arr1[c];
                         arr1[c] = arr1[position];
                         arr1[position] = swap;
                      }
                   }
                   for (int i = 0; i < 10; ++i)
                   {
                       //printf("%d ",arr1[i] );
                   }
                //printf("Received string at child: %s", readbuffer);
                //*readbuffer="hi";
                char a[]="hi\n";
                st=1;
                write(fd1[1], arr1, (sizeof(arr1)+1));

                /* Send "string" through the output side of pipe */
               

  //              exit(0);
        }
        else
        {
                close(fd[0]);
                write(fd[1], arr, (sizeof(arr)+1));
                //wait(st);
                char buff[80];
                int arr2[10];
                nbytes1 = read(fd1[0], arr2, sizeof(arr2));
                printf("Received string at Parent: ");
                for (int i = 0; i < 10; ++i)
                {
                    printf("%d ", arr2[i]);
                }
                
        }

        return(0);
}