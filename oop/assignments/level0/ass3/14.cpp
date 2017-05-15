#include <iostream>
using namespace std;

int main()
{
	int n,fact=1;
	cout<<"Enter any number : ";
	cin>>n;

	while(n>=1)
	{
		fact*=n;
		n--;
	}

	cout<<"Factorial :"<<fact;


	return 0;
}
/*Enter any number : 5
Factorial :120*/