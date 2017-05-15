#include <iostream>
#include <cmath>
using namespace std;

class calculater
{
public:
	int x,y,ans;
	int add(int x,int y)
	{
		ans=x+y;
		cout<<"addition is "<<ans;
		cout<<"\n";
	}
	int sub(int x,int y)
	{
		ans=x-y;
		cout<<"subtraction is"<<ans;
		cout<<"\n";
	}
	int div(int x,int y)
	{
		ans=x/y;
		cout<<"division is"<<ans;
		cout<<"\n";
	}
	int mul(int x,int y)
	{
		ans=x*y;
		cout<<"multiplicaton is"<<ans;
		cout<<"\n";
	}
	int power(int x,int y)
	{
		ans=pow(x,y);
		cout<<"power is "<<ans;
		cout<<"\n";
	}
};
int main(int argc, char const *argv[])
{
	int x,y,ans;
	calculater c;
	cout<<"enter choice between 1 to 4"<<'\n'<<"1 for add"<<"\n2 for sub\n"<<"3 for div\n"<<"4 for mul\n";
	int choice;
	cin>>choice;
	while(true)
	{
	switch(choice)
	{
		case 1:
		c.add(10,12);
		break;
	
		case 2:
		c.sub(12,10);
		break;

		case 3:
		c.div(10,2);
		break;

		case 4:
		c.mul(10,2);
		break;

		case 5:
		c.power(2,5);
		break;
	}
	break;
}
	return 0;
}