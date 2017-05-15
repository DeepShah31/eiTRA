
#include <stdio.h>
#include <signal.h>
 
void sigproc(void);
 
void abortproc(void); 
 
main()
{		 signal(SIGINT, sigproc);
		 signal(SIGABRT	, abortproc);
		 while(1);
 }
void sigproc()
{ 		 //signal(SIGINT, sigproc); /*  */
 
		 printf("you have pressed ctrl-c \n");
}
 
void abortproc()
{ 		 printf("abort\n");
}



