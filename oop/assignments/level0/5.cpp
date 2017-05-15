#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int p,r,n;
	float i;
	
	cout<<"enter principle\n";
	cin>>p;
	cout<<"enter rate\n";
	cin>>r;
	cout<<"enter n\n";
	cin>>n;
	i=(p*r*n)/100;
	cout<<i;
	cout<<"\n";

	return 0;
}