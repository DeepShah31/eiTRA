#include <stdio.h>
char r[100];
void reverse(char *c)
{
	//printf("%s\n",c );
	int i=0,j=0;
	for (i = 0; c[i]!='\0'; ++i)
	{
		j++;
	}
	for (i = 0;i<j ; ++i)
	{
		r[i]=c[j-(i+1)];
	}
	r[i]='\0';
	printf("%s\n", r);
}
int main()
{
	char c[100];
while(1){
	printf("enter string:\n");
	scanf("%s",c);
	reverse(c);}
	//printf("%s\n",c );}
	return 0;
}
