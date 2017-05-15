/*
Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following criteria
Distance			Fuel
<=1000			500
more than 1000 and <=2000 		1100
more than 2000 			2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number, Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members 
*/
#include <iostream>
using namespace std;
class Flight
{
	int flightno;
	string destination;
	float distance,fuel;
	void calfuel()
	{
		if(distance<=1000)
			fuel=500;
		else if(distance<2000)
			fuel=1100;
		else
			fuel=2200;
	}
public:
	void feedinfo(int flightno1,string destination1,float distance1)
	{
		flightno=flightno1;
		destination=destination1;
		distance=distance1;
		calfuel();
	}
	void showinfo()
	{
		cout<<"\n\n";
		cout<<"flightno="<<flightno<<endl;
		cout<<"description="<<destination<<endl;
		cout<<"distance="<<distance<<endl;
		cout<<"fuel="<<fuel<<endl;
	}


};
int main(int argc, char const *argv[])
{
	Flight f;
	int flightno;
	float distance;
	string destination;

	cout<<"flightno=";
	cin>>flightno;
	cout<<"destination=";
	cin>>destination;
	cout<<"distance=";
	cin>>distance;	
	f.feedinfo(flightno,destination,distance);
	f.showinfo();
	return 0;
}