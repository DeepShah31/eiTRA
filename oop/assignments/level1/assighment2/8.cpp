#include<iostream>
using namespace std;
class complex
{
    float x,y;
  public:
    void set(float real, float img)
      {
	x=real; y=img;
      }

     complex sum(complex C)
      {
	complex s;
	s.x = x + C.x;
	s.y = y + C.y;
	return s;
      }

     void disp()
      {
	cout<<x<<" +j"<<y<<'\n';
      }
};

int main()
{
   complex c1,c2,c3;
   float rel1,rel2,img1,img2;
   cout<<"enter first complex number"<<'\n';
   cin>>rel1>>img1;
   cout<<"enter second complex number"<<'\n';
   cin>>rel2>>img2;
   c1.set(rel1,img1);
   c2.set(rel2,img2);
   c3=c1.sum(c2);
   cout<<"Number 1= ";c1.disp();
   cout<<'\n'<<"Number 2= ";c2.disp();
   cout<<'\n'<<"Sum= ";c3.disp();
   return 0;
}
