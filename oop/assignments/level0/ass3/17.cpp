#include <iostream>
using namespace std;

int main()
{
	int n,t,r,sum=0;
	cout<<"Enter any number : ";
	cin>>n;
	t=n;

	while(t>0)
	{
		r=t%10;
		sum+=r;
		t=t/10;
	}

	cout<<"Sum of digits of number "<<n<<" is "<<sum;


	return 0;
}