#include <stdio.h>
int main()
{
	int k=1;
	int n=6;
	for (int i = 0; i <= n; ++i)
	{
		/* code */
		for (int j = 0; j <= n; ++j)
		{
			/* code */
			if(i>j)
			{
					k++;
					if(k%2==0)
						printf("1");
					else
						printf("0");
			}
			
		}
		printf("\n");
	}
	return 0;
}
