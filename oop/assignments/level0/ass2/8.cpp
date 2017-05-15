#include <iostream>
using namespace std;
void a()
{

int x = 10;
cout<<x<<x++;
}
void b()
{
int x = 10,y;
y = x + x++;
cout<<y;
}
void c()
{
int x = 10;
cout<<++x<<x++<<x;
}
void d()
{
int x = 10,y;
y = ++x + x++ + x;
cout<<y;
}
void e()
{
int x = 10;
cout<<x++<<x<<++x;
}
void f()
{
int x = 10,y;
y = x++ + x + ++x;
cout<<y;
}
int main(int argc, char const *argv[])
{
	a();
	cout<<endl;
	b();
	cout<<endl;
	c();
	cout<<endl;
	d();
	cout<<endl;
	e();		
	cout<<endl;
	f();
	//a();
	return 0;
}
/*OUTPUT:-
1110
21
121012
35
111212
33*/