#include <stdio.h>
#include <signal.h>

void sigint();
int pid;
main()
{ 
  printf("i am parent pid %d\n",getppid());
       signal(SIGINT,sigint);
     while(1);
}

void sigint()

{ 
 // signal(SIGINT,sigint); /* reset signal */
pid=fork();
if (pid==0)
{
  printf("child pid is %d\n", getpid());
 kill(getppid(),9);
 printf("CHILD: I have received a SIGINT\n");
}
   
}
