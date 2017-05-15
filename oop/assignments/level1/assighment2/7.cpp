#include <iostream>
using namespace std;
class Rectangle
{
	float length,width;
public:
	void setlength(float l)
	{
		length=l;
	}
	void setwidth(float w)
	{
		width=w;
	}
	float perimeter()
	{
		return 2*length+2*width;
	}
	float area()
	{
		return length*width;
	}
	void display()
	{
		cout<<"length="<<length<<endl;
		cout<<"width="<<width<<endl;
	}
	int sameArea(Rectangle r)
	{
		if((length*width)==(r.length*r.width))
			return 1;
		else
			return 0;
	}
};
int main(int argc, char const *argv[])
{
	Rectangle r1,r2,r3;
	float l,w;
	cout<<"enter length=";cin>>l;
	cout<<"enter width=";cin>>w;
	r1.setlength(l);
	r1.setwidth(w);
	cout<<"perimeter="<<r1.perimeter()<<endl;
	cout<<"area="<<r1.area()<<endl;
	
	cout<<"enter length=";cin>>l;
	cout<<"enter width=";cin>>w;
	r2.setlength(l);
	r2.setwidth(w);
	cout<<"perimeter="<<r2.perimeter()<<endl;
	cout<<"area="<<r2.area()<<endl;
	
	if(r1.sameArea(r2))
	{
		cout<<"both Rectangles have sameArea";
	}
	else
	{
		cout<<"both Rectangles not have sameArea";	
	}
	return 0;
}