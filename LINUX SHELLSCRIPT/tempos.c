#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	int childpid,count1=0,count2=0;
	printf("before fork\n");
	sleep(5);
	childpid=fork();

	if (childpid==0)
	{
		printf("this is child process\n");
		while(count1<10)
		{
			printf("child process is %d\n",count1);
			sleep(1);
			count1++;
		}
	}
	else
	{
		printf("this is parent process\n");
		while(count2<10)
		{
			printf("parent process is %d\n",count2);
			//wait(2);
			sleep(1);
			count2++;
		}
}

	return 0;
}