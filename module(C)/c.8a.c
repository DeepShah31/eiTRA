#include <stdio.h>
float div(float n1)
{
		
	return n1/(n1+1);
}
int main()
{
	float n,sum=0;
	scanf("%f",&n);
	//printf("%d\n",fact(4));

	for (int i = 1; i <= n; i++)
		{
		
			sum=sum+div(i);
			
		}	
		printf("%f \n",sum );
	return 0;
}
