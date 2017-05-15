#include <iostream>
using namespace std;
class A
{
	
public:
	int a;
	A()
	{
		a=10;
		cout<<"A"<<endl;
	}
	~A()
	{

	}
	void display1()
	{
		cout<<a<<endl;
	}
};
class B
{
	
public:
	int b=0;
	B()
	{
		b=20;
		cout<<"B"<<endl;
	}
	void display1()
	{
		cout<<b;
	}
	
	
};
class C:public B,public A
{
	int c;
public:
	C()
	{
		c=30;
	
	}
	
	void display()
	{
		cout<<a<<b<<c;	
		A::display1();
		B::display1();
	}
	
};

int main(int argc, char const *argv[])
{
	C ab;
	ab.display();
	return 0;
}