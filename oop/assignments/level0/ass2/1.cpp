#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x=10,y=5;
	x=x+y;//15
	y=x-y;//15-5
	x=x-y;//15-10
	cout<<"value of x is "<<x;
	cout<<"\n";
	cout<<"value of y is "<<y;
	cout<<"\n";
	return 0;
}