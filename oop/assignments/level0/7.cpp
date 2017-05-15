#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,temp;
	cout<<"enter value of a\n";
	cin>>a;
	cout<<"enter value of b\n";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<a;
	cout<<"\n";	
	cout<<b;
	cout<<"\n";

	return 0;
}