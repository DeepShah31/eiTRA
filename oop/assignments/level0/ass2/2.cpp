#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,x;
	cout<<"enter value of a";
	cin>>a;
	cout<<"enter value of b";
	cin>>b;
	cout<<"enter value of c";
	cin>>c;
	// if(n1 >= n2 && n1 >= n3)
 //    {
 //        cout << "Largest number: " << n1;
 //    }

 //    if(n2 >= n1 && n2 >= n3)
 //    {
 //        cout << "Largest number: " << n2;
 //    }

 //    if(n3 >= n1 && n3 >= n2) {
 //        cout << "Largest number: " << n3;
 //    }
	(a>b&&a>c)?cout<<"bigger is :"<<a:(b>a&&b>c)?cout<<"bigger is:"<<b:cout<<"bigger is:"<<c;
	cout<<"\n";
	
	return 0;
}