
#include <iostream>
using namespace std;
void a()
{

int x = 10,y;
y = x++;
cout<<y;
}
void b()
{
	int x = 10,y;
y = ++x;
cout<<y;
}
void c()
{
int x = 10,y;
y = x++;
cout<<x;
}
void d()
{
int x = 10;
x++;
cout<<x;
}
void e()
{
int x = 10;
cout<<++x;
}
void f()
{
int x = 10;
cout<<x++;
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
/*output:-10
11
11
11
11
*/