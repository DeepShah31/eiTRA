#include <iostream>
using namespace std;
class Distance
{
   int feet;
   float inches;
  public:
   void set(int f, float i)
    {
      feet=f; inches=i;
    }

   void disp()
   {
      cout<<feet<<" "<<inches<<'\n';
   }

   Distance add(Distance D)
   {
     Distance t;
     t.inches=inches + D.inches;
     t.feet =0;
      if(t.inches>=12.0)
	{
	  t.inches=t.inches-12.0;
	  t.feet++;
	}
     t.feet=t.feet+feet+D.feet;
     return t;
   }

};

int main()
{
  Distance d1,d2,d3;
  int f1,f2; 
  float i1,i2;
  cout<<"enter distance in feet and inches"<<'\n';
  cin>>f1>>i1;
  cout<<"enter distance in feet and inches"<<'\n';
  cin>>f2>>i2;
  d1.set(f1,i1);
  d2.set(f2,i2);
  d3=d1.add(d2);
  cout<<"distance 1 = ";d1.disp();
  cout<<"\ndistance 2 = ";d2.disp();
  cout<<"\ndistance 3 = ";d3.disp();
  return 0;
}