
#include <stdio.h>
#include <signal.h>
 
void sigproc(void);
 
void abortproc(void); 
 
main()
{		 signal(SIGINT, sigproc);
		 signal(SIGABRT	, abortproc);
		 while(1);
		 //printf("ctrl-c disabled use ctrl-\\ to quit\n");
		 //for(;;); /* infinite loop */}
 }
void sigproc()
{ 		 //signal(SIGINT, sigproc); /*  */
		 /* NOTE some versions of UNIX will reset signal to default
		 after each call. So for portability reset signal each time */
 
		 printf("you have pressed ctrl-c \n");
}
 
void abortproc()
{ 		 printf("abort\n");
		// exit(0); /* normal exit status */
}



