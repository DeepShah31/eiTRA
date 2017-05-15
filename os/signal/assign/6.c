#include <stdio.h>
#include <signal.h>

void sigint();
void sigabrt();
int pid;
main()
{ 
  printf("i am parent pid %d\n",getppid());
       signal(SIGINT,sigint);
       signal(SIGABRT,sigabrt);
     while(1);
}

void sigint()

{ 
 // signal(SIGINT,sigint); /* reset signal */
pid=fork();
  //printf("child pid is %d\n", getpid());
if (pid==0)
 {
 	 printf("CHILD: I have received a SIGINT\n");
 } 


   
}
void sigabrt()
{
//printf("hello\n");

kill(getpid(),6);
kill(getppid(),6);

}