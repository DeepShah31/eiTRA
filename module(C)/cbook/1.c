#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("1.txt","w");
	printf("%p\n", fp);
		return 0;
}