#include <iostream>
using namespace std;

int main()
{
	int i,n,sign=-1;
	float sum=0;
	cout<<"Enter the value of n ";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		sign *= -1;
		sum += sign*1.0/i;
	}
	cout<<"log 2 : "<<sum;

	
	return 0;
}
/*Enter the value of n 12
log 2 : 0.653211*/	