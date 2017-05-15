#include<stdio.h>
int main()
{
	char a='a';
	void *p;
	printf("a=%p--------%c\n",&a,a);
	p=&a;
	//printf("&p=%p\n",p);
	//p++;
	printf("&p=%p\n",p);
	printf("sizeof pointer:%lu\n",sizeof(void *));

	printf("p=%p--------%p--------%c\n",&p,p,*(char *)p);
		
	return 0;
}
