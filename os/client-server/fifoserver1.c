#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MSGSZ     128

typedef struct msgbuf {
    long    mtype;
    char    mtext[MSGSZ];
} message_buf;
struct msqid_ds mq;
int main(int argc, char const *argv[])
{
     int n=0;

    
      int fp;
      char ch;
      char readbuf[100];
     message_buf  rbuf,sbuf;
      size_t buf_length;
     int msqid;
     if ((msqid = msgget(123,IPC_CREAT| 0666)) < 0) {
        exit(1);
    }
   // msgctl(msqid,IPC_STAT,&mq);

    while(1)
    {
      
        {
        for (int i = 0; i <=5; i++)
        {
            if (msgrcv(msqid, &rbuf, MSGSZ, i, 0) < 0)
            {
                break;
            }
            else
            {
                printf("%s\n",rbuf.mtext);
                fp=open(rbuf.mtext,O_RDONLY);
                char c[100];
                while(read(fp,c,10)!=0)
                {
                    // sbuf.mtype=i;
                    
                    strcpy(rbuf.mtext,c);
                    int s=sizeof(rbuf.mtext);
                 //   int buf_length1=sizeof(c);
                    int buf_length=sizeof(c);
                    // printf("%d\n",s );
                    
                    printf("%s\n",c );
                    break;
                    //printf("msqid=%d\n", msqid);
                    // if (msgsnd(msqid, &sbuf, buf_length1, IPC_NOWAIT) < 0) 
                    //   {
                     //     printf("msqid=%d\n", msqid);
                    //     printf("error\n");
                    //     break;
                    //   }
                    //   else
                    //     printf("send\n");
                 // / fclose(fp);
                }
                break;
                //printf("%s\n",rbuf.mtext);
                //  printf("-------------------\n");
                //break;  
            }
            
        }
        
       }
    }
    return 0;
}