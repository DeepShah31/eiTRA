#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A()
    {
        a=10;
    }
    ~A()
    {

    }
    void display1()
    {
        cout<<a;
    }
};
class B:public A
{
    int b=0;
public:
    B()
    {
        b=20;
    }
   
   
};
class C:public B
{
    int c;
public:
    C()
    {
        c=10;
   
    }
   
    void display()
    {
        //    cout<<a<<b<<c;   
        display1();
    }
   
};

int main(int argc, char const *argv[])
{
    C ab;
    ab.display();
    return 0;
}