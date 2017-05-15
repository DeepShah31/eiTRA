#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	

	int pid1=-1,pid2=-1,pid3=-1,pid4=-1;

	pid1=fork();

	if (pid1==0)
	{
		pid2=fork();
	}
	if (pid2==0)
	{
		pid3=fork();
	}
	if (pid3==0)
	{
		pid4=fork();
	}
	while(1){}
	return 0;
}