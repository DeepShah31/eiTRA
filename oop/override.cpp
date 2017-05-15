#include <iostream>
using namespace std;

class A
{
public:
	void display()
	{
		cout<<"A"<<endl;
	}
};
class B:public A
{
public:
	void display()
	{
		cout<<"B";
	}
};
int main(int argc, char const *argv[])//pointer thi j access thay ..
{
	A *ob=new B();
	B *ob1;
	ob1->display();
	ob->display();
	return 0;
}
	