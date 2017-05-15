#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#define MSGSZ     128
typedef struct msgbuf {    //msg structure for char data
    long    mtype;
    char    mtext[MSGSZ];
} message_buf;

int main(int argc, char const *argv[])
{
	int msqid;
    key_t key;
    size_t buf_length;
    message_buf  rbuf;
     int msgflg = IPC_CREAT | 0666;
    key = 133;
    if ((msqid = msgget(key, msgflg )) < 0) {
        perror("msgget");
        exit(1);
    }
       if (msgrcv(msqid, &rbuf, MSGSZ, 2, 0) < 0) 
       {  //receiving msg type 2 i.e char data
          perror("msgrcv");
          exit(1);
      }
           printf("%s\n", rbuf.mtext);

	int pid1=-1,pid2=-1,pid3=-1,pid4=-1;

	    pid1=fork();
		 rbuf.mtype = 1;
		  (void) strcpy(rbuf.mtext, "hello");
		  buf_length = strlen(rbuf.mtext) + 1 ;
		  (msgsnd(msqid, &rbuf, buf_length, 0));
		  printf("Message: \"%s\" Sent\n", rbuf.mtext);

	if (pid1>0)
	{
		pid2=fork();//create process with id pid2(in the parent of main program(current))
		 rbuf.mtype = 1;
		  (void) strcpy(rbuf.mtext, "hello");
		  buf_length = strlen(rbuf.mtext) + 1 ;
		  (msgsnd(msqid, &rbuf, buf_length, 0));
		  printf("Message: \"%s\" Sent\n", rbuf.mtext);
	}
	if (pid2>0)
	{	
		pid3=fork();//create process with id pid3(in the parent of main program(current))
		 rbuf.mtype = 2;
		  (void) strcpy(rbuf.mtext, "hello");
		  buf_length = strlen(rbuf.mtext) + 1 ;
		  (msgsnd(msqid, &rbuf, buf_length, 0));
		  printf("Message: \"%s\" Sent\n", rbuf.mtext);
		  	}
	if (pid3>0)
	{
		pid4=fork();//create process with id pid4(in the parent of main program(current))
			rbuf.mtype = 2;
		  (void) strcpy(rbuf.mtext, "hello");
		  buf_length = strlen(rbuf.mtext) + 1 ;
		  (msgsnd(msqid, &rbuf, buf_length, 0));
		  printf("Message: \"%s\" Sent\n", rbuf.mtext);
	}
	//while(1){}
	return 0;
}