#include <stdio.h>
char a[100],b[100];
int any(char *a1,char *b1)
{
	int flag=0,index=0;
	for (int i = 0; b1[i]!='\0'; ++i)
	{
		for (int j = 0; a1[j]!='\0'; ++j)
		{
			if(a1[j]==b1[i])
			{
				index=j;
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		return index;
	}
	else
	{
		return -1;
	}
}
int main(int argc, char const *argv[])
{
	printf("enter string:\n");
	scanf("%s",a);
	printf("enter character:\n");
	scanf("%s",b);
	//printf("%s%s\n",a,b );
	int aaa=any(a,b);
	printf("%d\n", aaa);
	return 0;
}
