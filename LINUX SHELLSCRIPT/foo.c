#include<stdio.h>
extern int addnum(int a,int b);
int main()
{
	int sum;
	int x=5;
	int y=7;
	sum=addnum(x,y);
	printf("%d\n", sum);
	return 0;
}