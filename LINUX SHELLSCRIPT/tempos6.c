#include <stdio.h>
int main(int argc, char *argv[])
{
int pid,i;
char *args[2];
printf("I am parent PID %d\n",getpid());
pid=fork();
if(pid==0)
{
args[0]="./deep";
args[1]=NULL;
printf ("I am child PID %d\n",getpid());
i=execv("./deep ",args);
}
else
printf("I am parent\n");
return 0;
}