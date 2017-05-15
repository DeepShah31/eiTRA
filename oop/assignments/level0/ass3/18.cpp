#include <iostream>
using namespace std;

int main()
{
	int n;
	bool flag=false;
	cout<<"Enter any number : ";
	cin>>n;

	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=true;
			break;
		}
	}

	if(flag==false && n>1)
		cout<<"Number is prime";
	else
		cout<<"Number is not prime";


	return 0;
}
/*Enter any number : 13
Number is prime*/