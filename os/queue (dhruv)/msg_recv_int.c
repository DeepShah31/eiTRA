#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct msgbuf     //declare the message structure
{
    long    mtype;
    int    mtext;
} message_buf;

int main()
{ 
    int msqid;
    key_t key;
    int msgflg = IPC_CREAT | 0666;
    message_buf  rbuf;
    key = 234;    //declaring key

    if((msqid = msgget(key,msgflg)) < 0)  //queue declaring with key and 0666 permission
    {
        perror("msgget");
        exit(1);
    }
    
    /*
     * Receive an answer of message type 1.
     */
    if (msgrcv(msqid, &rbuf, 12, 1, 0) < 0) {
        perror("msgrcv");
        exit(1);
    }

    /*
     * Print the answer.
     */
    printf("%d\n", rbuf.mtext);
     exit(0);
}
