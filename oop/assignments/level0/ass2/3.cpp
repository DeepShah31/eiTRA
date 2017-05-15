#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"enter amount number:";
	cin>>n;
	cout<<"500X "<<n/500<<endl;
	n=n-(n/500)*500;
	cout<<"100X "<<n/100<<endl;
	n=n-(n/100)*100;
	cout<<"50X "<<n/50<<endl;
	n=n-(n/50)*50;
	cout<<"20X "<<n/20<<endl;
	n=n-(n/20)*20;
	cout<<"10X "<<n/10<<endl;
	n=n-(n/10)*10;
	cout<<"5X "<<n/5<<endl;
	n=n-(n/5)*5;
	cout<<"1X "<<n;
	
	
	
	
	return 0;
}