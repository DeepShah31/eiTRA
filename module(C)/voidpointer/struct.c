#include<stdio.h>
struct a
{
	int num;
	char c;
}s;
int main()
{
	struct a n;
	void *s1;
	s1=&n;
	n.num=10;
	n.c='a';
	printf("%d",*(int *)s1);
	s1=s1+4;
	
	printf("%c",*(char *)s1);
	

	return 0;
}
