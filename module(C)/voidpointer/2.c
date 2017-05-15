#include<stdio.h>
int main()
{
	int a=10;
	void *p;
	printf("a=%p--------%d\n",&a,a);
	p=&a;
	
	printf("sizeof pointer:%lu\n",sizeof(void *));
	printf("p=%p--------%p--------%d\n",&p,p,*(int *)p);
		
	return 0;
}
