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
    message_buf  rbuf,pidbuf1,pidbuf2,pidbuf3,pidbuf4;
    key = 133;
    if ((msqid = msgget(key, 0666)) < 0)
     {  //creating queue if not
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
		 pidbuf1.mtype = 1;
		  (void) strcpy(pidbuf1.mtext, "hello deep");
		  buf_length = strlen(pidbuf1.mtext) + 1 ;
		  (msgsnd(msqid, &pidbuf1, buf_length, 0));
		  printf("Message: \"%s\" Sent\n", pidbuf1.mtext);

	if (pid1>0)
	{
		pid2=fork();//create process with id pid2(in the parent of main program(current))
		 pidbuf2.mtype = 1;
		  (void) strcpy(pidbuf2.mtext, "hello xyz");
		  buf_length = strlen(pidbuf2.mtext) + 1 ;
		  (msgsnd(msqid, &pidbuf2, buf_length, 0));
		  printf("Message: \"%s\" Sent\n", pidbuf2.mtext);
	}
	if (pid2>0)
	{	
		pid3=fork();//create process with id pid3(in the parent of main program(current))
		key=133;
		 pidbuf3.mtype = 2;
		  (void) strcpy(pidbuf3.mtext, "hello xyz");
		  buf_length = strlen(pidbuf3.mtext) + 1 ;
		  (msgsnd(msqid, &pidbuf3, buf_length, 0));
		  printf("Message: \"%s\" Sent\n", pidbuf3.mtext);
		  	}
	if (pid3>0)
	{
		pid4=fork();//create process with id pid4(in the parent of main program(current))
			pidbuf4.mtype = 2;
		  (void) strcpy(pidbuf4.mtext, "hello xyz");
		  buf_length = strlen(pidbuf4.mtext) + 1 ;
		  (msgsnd(msqid, &pidbuf4, buf_length, 0));
		  printf("Message: \"%s\" Sent\n", pidbuf4.mtext);
	}
	while(1){}
	return 0;
}