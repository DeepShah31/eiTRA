#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MSGSZ 128

typedef struct msgbuf {
    long    mtype;
    char    mtext[MSGSZ];
} message_buf;
struct msqid_ds mq;
int main(int argc, char const *argv[])
{
     int n=0;

    FILE *fp;
        //sleep(1);
     message_buf  rbuf;
     int msqid,msqid1;
     if ((msqid = msgget(123,IPC_CREAT| 0666)) < 0) {
        exit(1);
    }
  
    while(1)
    {
        {
        for (int i = 0; i <=5; i++)
        {
            if (msgrcv(msqid, &rbuf, MSGSZ, i, 0) < 0)
            {
               // break;
            }
            else
            {
                printf("received file from client is \t%s\n",rbuf.mtext);
            }

        }
        
       }
    }
    return 0;
}