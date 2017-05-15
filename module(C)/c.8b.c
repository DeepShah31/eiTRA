#include <stdio.h>
static int a=1;
float div(float n1)
{
	float ans=a;
	a++;
	ans=ans/a;
	//printf("%f\n",ans );	
	a++;
	return ans;

}
int main()
{
	float n,sum=0;
	scanf("%f",&n);
	//printf("%f\n",div(1));

	for (int i = 1; i <= n; i++)
		{
		
			sum=sum+div(i);
			//printf("%f\n",d );
			
		}	
		printf("%f \n",sum );
	return 0;
}
