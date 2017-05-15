#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[3][3]={2,3,1,4,5,6,7,8,9},b[3][3];
	int temp;
	for (int i = 0; i < 3; ++i)
	{
		/* code */
		for (int j = 0; j < 3; j++)
		{	
			printf("%d ", a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; ++i)
	{
		/* code */
		for (int j = 0; j < 3; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
