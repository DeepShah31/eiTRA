#include <iostream>
using namespace std;

int main()
{
	int dividend, divisor, rem=1, hcf;
	cout<<"Enter two numbers : ";
	cin>>dividend>>divisor;

	while(rem!=0)
	{
		rem=dividend%divisor;
		if(rem==0)
			hcf=divisor;
		else
		{
			dividend=divisor;
			divisor=rem;
		}
	}

	cout<<"HCF is : "<<hcf;


	return 0;
}
/*nter two numbers : 12
22
HCF is : 2*/