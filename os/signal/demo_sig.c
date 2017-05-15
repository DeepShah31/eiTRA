#include <stdio.h>
#include <signal.h>
int count;
int count_s;
void func(int);
void func2(int);
int main()
{
	//signal(SIGINT,func);
signal(SIGSTOP,func2);
printf("Value of SIGSTOP %d\n",SIGSTOP);
while(1);
return 0;
}

void func(signum)
{
count++;
printf("Interrupt received %d times\n",count);
if(count==5)
exit(1);
}

void func2(signum)
{
count_s++;
printf("Stop received %d times\n",count_s);
if (count_s==5)
exit (1);
}