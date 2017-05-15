#include<stdio.h>
int isupper(char *c)
{
	if(*c>64&&*c<93)
	{
		return 1;
	}
	else
	return 0;
}
int main(int argc,char * argv[])
{
	
	char a='A';
	printf("enter character:");
	scanf("%c",&a);	
	if(isupper(&a))
		printf("%c is in upper case",a);
	else
		
		printf("%c is not in upper case",a);
	
	return 0;

}