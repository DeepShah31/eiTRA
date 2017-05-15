#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,b=30,c=12;
	void *p[3];
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	for(int i=0;i<3;i++)
	printf("%d\n",*(int *)p[i]);
	return 0;
}
