#include <stdio.h>
char s[100]={"deep shah"};
void squeeze(char *s1, char *c)
{
	printf("%s\n",s1);
	printf("%s\n", c);
	int i=0,j=0;
	char a[100];
	while(s1[i]!='\0')
	{
		if(s1[i]!=c[0])
		{
			a[j]=s1[i];
			j++;
		}
		i++;
	}
	a[j]='\0';
	printf("output:%s\n",a );
}
int main(int argc, char const *argv[])
{
	
	//printf("%s\n",s );
	char c1[1];
	printf("enter character:\n");
	scanf("%s",c1);
	//printf("%s\n",s );
	squeeze(s,c1);

	return 0;
}
