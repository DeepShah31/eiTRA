#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={8,2,4,7,8,9,5,4,2},c[3][3];
	int sum=0;
	printf("matrix a:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			/* code */
			printf("%d ",a[i][j] );
		}
		printf("\n");
		/* code */
	}
	printf("\nmatrix b\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			/* code */
			printf("%d ",b[i][j] );
		}
		printf("\n");
		/* code */
	}
	printf("\n");
	for (int i = 0; i <= 2; i++) {
      for (int j = 0; j <= 2; j++) {
         sum = 0;
         for (int k = 0; k <= 2; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

	printf("\nresultant metrix:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			/* code */
			printf("%d ",c[i][j] );
		}
		printf("\n");
		/* code */
	}
	return 0;
}
