#include <iostream>
using namespace std;


 int main()
    {

       int year;

       cout<<"\n Enter the year = ";
       cin>>year;

       if(year%4==0 || year%400==0 || year%100==0)
      cout<<"this is a leap year"<<endl;

       else
      cout<<"this is not a leap year"<<endl;

      
       return 0;
    }
    /*OUTPUT
    Enter the year = 2017
this is not a leap year*/