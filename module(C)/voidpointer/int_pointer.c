#include<stdio.h>
int main()
{
	int a=10,*p;
	printf("a=%p--------%d\n",&a,a);
	p=&a;
	
	printf("sizeof pointer:%lu\n",sizeof(int *));
	printf("p=%p--------%p\n",&p,p);
	
	
	
	return 0;
}
