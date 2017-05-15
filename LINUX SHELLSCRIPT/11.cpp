#include <iostream.h>
#include <conio.h>
int a,b,c,d,e;
class A
{
 protected:
 public:
 void getab()
 {
  cout<<"\n Enter a and b value:";
  cin>>a>>b;
 }
};
class B:public A
{
 protected:
 public:
 void getc()
 {
  cout<<"\n Enter c value:";
  cin>>c;    
 }
};
class C    
{
 protected:
 public:
 void getd()    
 {
  cout<<"\n Enter d value:";
  cin>>d;    
 }
};
class D:public B,public C    
{
 protected:
 public:
 void result()    
 {
  getab();    
  getc();
  getd();    
  e=a+b+c+d;
  cout<<"\n Addition is :"<<e; 
 }
};
 void main()    
{
 clrscr();
 D d1;
 d1.result();
 getch();        
}