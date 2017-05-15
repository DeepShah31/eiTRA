#include<iostream>
using namespace std;

class Time
{
  int hours, minutes;
  public:
    void settime(int h, int m)
     {
	hours=h; minutes=m;
     }
   void showtime()
     {
        cout<<hours<<" hours and "<<minutes<<" minutes"<<'\n';
     }

    Time sum(Time TM)
     {
	Time t;
	t.minutes=minutes+TM.minutes;
	t.hours=t.minutes/60;
	t.minutes=t.minutes%60;
	t.hours=t.hours+hours+TM.hours;
	return t;
     }
};

int main()
{
  Time t1,t2,t3;
  t1.settime(10,35);
  t2.settime(6,20);
  t3=t1.sum(t2);
  cout<<"Time 1 : ";t1.showtime(); 
  cout<<"Time 2 : ";t2.showtime();
  cout<<"Time 3 : ";t3.showtime();
  return 0;
}
