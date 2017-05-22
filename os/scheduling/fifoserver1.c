#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
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

    
        //sleep(1);
     message_buf  rbuf;
     int msqid;
     if ((msqid = msgget(123,IPC_CREAT| 0666)) < 0) {
        exit(1);
    }
    msgctl(msqid,IPC_STAT,&mq);
    // while(mq.msg_cbytes==0)
    // {
    //  printf("%ld\n",mq.msg_cbytes);
    // }
 // while(msgrcv(msqid, &rbuf, MSGSZ, n++, 0) >= 0)
    //  {
    //      
      printf("%ld\n",(int)mq.msg_cbytes);   
    //     printf("%d-%s\n", n,rbuf.mtext);
    //     //n++;
    //     if (n>=5)
    //     {
    //      n=0;
    //     }
    // }
    // while(1)
    // {
    //  while(flag!=0);
    // }
    while(1)
    {
        //printf("0");
        //while((int)mq.msg_cbytes!=0)
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
                break;  
            }
            
            //printf("aa\n");
        }
        
       }
    }
    return 0;
}