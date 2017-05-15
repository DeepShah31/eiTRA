#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char a[100]={"hello"};
	printf("%s\n",a );
	scanf("%s",a);
	for (int i = 99; i >= 0; i--)
	{
		int a1=a[i];
		if (a1!=0)
		{
			printf("%c",a[i] );
			/* code */
		}
	}
	//printf("%d\n",l );
	return 0;
}
