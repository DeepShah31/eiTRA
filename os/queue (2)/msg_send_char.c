#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <string.h>
#define MSGSZ 128


typedef struct msgbuf   //Declare the message structure.
{
   long mtype;
   char  mtext[MSGSZ];
} message_buf;

main()
{
    int msqid;
    int msgflg = IPC_CREAT | 0666;
    key_t key;
    message_buf sbuf;
    size_t buf_length;

    key = 234;  //defining key
   if((msqid = msgget(key, msgflg )) < 0)  //creating queue with key and msgflgpermission
    {
        perror("msgget");
        exit(1);
    }
   else
     printf("msqid %d\n",msqid);

    sbuf.mtype = 1; //msg type type
    (void) strcpy(sbuf.mtext, "Hello World");   //msg which is to be send
    buf_length=(sizeof(sbuf.mtext));
 
    if(msgsnd(msqid, &sbuf, buf_length, IPC_NOWAIT) < 0) {
       printf ("%d, %ld, %s, %zu\n", msqid, sbuf.mtype, sbuf.mtext, buf_length);
        perror("msgsnd");
        exit(1);
     }
    else 
      printf("Message: \"%s\" Sent\n", sbuf.mtext);
     exit(0);
}
