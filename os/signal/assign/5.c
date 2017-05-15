#include <stdio.h>
#include <signal.h>
int count;
int count_s;
//void func(int);
void func2(int);
int main()
{
	//signal(SIGINT,func);
signal(SIGABRT,func2);
printf("Value of SIGABRT %d\n",SIGABRT);
while(1);
return 0;
}

// void func(signum)
// {
// count++;
// printf("Interrupt received %d times\n",count);
// if(count==5)
// exit(1);
// }

void func2(signum)
{
count_s++;
// kill(getppid(),9);
printf("abort received %d times\n",count_s);
if (count_s==5)
exit (1);
}