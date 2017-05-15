#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	int pid1=-1,pid2=-1,pid3=-1,pid4=-1,sum=0,i,sum1=0;
	int arr[100],b[3];
	for (int i = 0; i < 100; ++i)
	{
		arr[i]=i;
	}
		pid1=fork();//create process with pid1
		if (pid1==0){//child of pid1
		for (i = 0; i < 25; i++)
          sum = sum + arr[i];
          b[0]=sum;
          printf("sum of 1 to 25 is%d\n",sum);
         // sleep(2);
      }
	if (pid1==0)
	{
		pid2=fork();//create process with pid2
		if(pid2==0){//child of pid2
		for (i = 25; i <50; i++)
      sum = sum + arr[i];
  	  b[1]=sum;
      printf("sum of 25 to 50 is%d\n",sum);
      //sleep(5);
  }
	}
	if (pid2==0)
	{
		pid3=fork();//create process with pid3
		if(pid3==0){//child of pid3
		for (i = 50; i < 75; i++)
        sum = sum + arr[i];
        b[2]=sum;
       printf("sum of 50 to 74 is%d\n",sum);
       //sleep(2);
		}
	}
	if (pid3==0)
	{
		pid4=fork();//create process with pid4
		if(pid4==0){//child of pid4
		for (i = 75; i < 100; i++)
        sum = sum + arr[i];
       b[3]=sum;
      printf("sum of 75 to 100 is%d\n",sum);
}
	}
	if (pid1==0){	
	for(int i=0;i<4;i++)
		{
			sum1=sum1+b[i];
		}	
		printf("total=%d\n",sum1);}//print sum of 4 process 
	while(1){}
	return 0;
}