#include<stdio.h>
int main()
{
	char a[]={"sandip"};
	void *p;
	p=&a[0];
	
	printf("for char array\n");
	for(int i=0;i<6;i++)
	printf("p=%p--------%p--------%c\n",&p,p,*(char *)p++);
	
	printf("----------------------------\n")	;
	int  aa[]={1,2,3,4,5,6};
	void *p1=&aa[0];
	printf("for int array\n");
	for(int i=0;i<6;i++)
	{
	printf("p1=%p--------%p--------%d\n",&p1,p1,*(int *)p1);
	p1=p1+4;
	}
	return 0;
}
