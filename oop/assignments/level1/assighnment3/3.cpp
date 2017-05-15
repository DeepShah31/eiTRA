#include <iostream>
using namespace std;
class vehicle
{
private:
	int wheels;
protected :
	int passenger;
public :
	void inputdata (int, int);
	void outputdata();
};
class heavyvehicle : protected vehicle
{
	int diesel_petrol;
	protected :
	int load;
public:
	void readdata(int, int);
	void writedata();
};
class bus : private heavyvehicle
{
	char make[20];
public :
	void fetchdata(char);
	void displaydata(){
		cout<<wheels;
	}
};
int main(int argc, char const *argv[])
{
	vehicle veh;
	//heavyvehicle hv;
//	hv.outputdata(); 
	bus bs;
	bs.displaydata();
	//1bs.make='a';

	return 0;
}
/*
(i) Name the base class and derived class of the class heavy_vehicle.
ANS:-baseclass of heavy_vehicle is vehicle and derived class is bus
(ii) Name the data member(s) that can be accessed from function displaydataO.
ANS:-make,passenger,load
(iii) Name the data member's that can be accessed by an object of bus class.
ANS:-none
(iv) Is the member function outputdata() accessible to the objects of heavy_vehicle class.
ANS:-No
*/
