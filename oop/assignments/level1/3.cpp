#include <iostream>
using namespace std;

class calculator
{
public:
	float area,r;
	int l,b;

	int square(int l)
	{
		area=l*l;
		cout<<"area of square is\n\n"<<area<<"\n";
	}
	int rectangle(int l,int b)
	{
		area=l*b;
		cout<<"area of rectangle is"<<area<<"\n";
	}
	int triangle(int l,int b)
	{
		area=(l*b)/2;
		cout<<"area of triangle is\n\n"<<area<<"\n";
	}
	int circle(int r)
	{
		area=3.14*r*r;
		cout<<"area of circle is\n\n"<<area<<"\n";
	}
	int semicircle(int r)
	{
		area=(3.14*r*r)/2;
		cout<<"area of clircle is \n\n"<<area<<"\n";
	}
};
int main(int argc, char const *argv[])
{
	calculator c;
	c.square(10);
	c.rectangle(10,20);
	c.triangle(10,20);
	c.circle(10);
	c.semicircle(10);
	return 0;
}