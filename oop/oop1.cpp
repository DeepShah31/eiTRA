#include <iostream>
using namespace std;

class whatsapp
{
	string msg;
	char ch;
	int a;

public:
	whatsapp()
	{
		msg="";
		ch=0;
		a=0;
	}
	whatsapp(string msg,int a)
	{
		this->msg=msg;
		this->a=a;
	}
	whatsapp(float c,string msg)
	{
		this->a=(int)c;
		this->msg=msg;
	}
	void send(string msg)
	{
		cout<<msg;
	}
	void send(string msg,int a)
	{
		cout<<msg;
		cout<<a;
	}
	void send(int a,string msg)
	{
		cout<<a;
		cout<<msg;
	}

};
int main(int argc, char const *argv[])
{
	whatsapp obj;
	whatsapp obj1();
	obj1.send("deep",1);
	
	return 0;
}