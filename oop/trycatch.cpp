#include <iostream>
using namespace std;
class A
{
	int a,b;
public:
	A()
	{
		a=0;
		b=0;
	}
	A(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	float div()
	{
		try{
		return a/b;
	}
	catch(exception e)
	{
		cout<<devide by 0;
	}
	}
};
int main(int argc, char const *argv[])
{
	A aa;
	A bb(1,0);
	try{
	cout<<aa.div();
}
	bb.div();
	return 0;
}