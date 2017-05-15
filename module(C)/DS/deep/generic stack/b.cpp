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
	
public:
	int c;
	C()
	{
		c=30;
		cout<<"C"<<endl;
	
	}
	
	void display1()
	{
		cout<<a<<b<<c;	
		display1();
	}
	
};
class D:public C
{
public:
	int d;
	D()
	{
		d=40;
		cout<<"D"<<endl;
	}
	void display1()
	{
		cout<<a<<b<<c<<d;
		//display1();
	}
};


int main(int argc, char const *argv[])
{
	D ab;
	ab.display1();
	return 0;
}