#include <iostream>
using namespace std;
class Movie
{
	int dish[3],starter[3],desert[3],sum;
public:
	Movie()
	{
		dish[0]=200;
		dish[1]=300;
		dish[2]=365;
		starter[0]=100;
		starter[1]=120;
		starter[2]=140;
		desert[0]=110;
		desert[1]=120;
		desert[2]=140;

	}
	int prize(int n1,int n2,int n3,int n4)    //n1 for dish type and n2 is for starter type 
										//n3 is for desret and n4 no of dishes
	{
		sum=dish[n1-1]+starter[n2-1]+desert[n3-1];
		
		sum=sum*n4;
		sum=sum+(sum*12.36)/100;
		return sum;
	}

};

int main(int argc, char const *argv[])
{
	Movie m;
	int n1,n2,n3,n4;
	
	
	cout<<"1. paneer hadi\n";
	cout<<"2. chezz butter masala\n";
	cout<<"3. chezz mumtaz\n";
	cout<<"select dish:\n";
	cin>>n1;
	cout<<"1. veg.manchurian\n";
	cout<<"2. veg.crispy\n";
	cout<<"3. chezz roll\n";
	cout<<"select starter type:\n";
	cin>>n2;
	cout<<"1. vanila\n";
	cout<<"2. hot choclate icecream\n";
	cout<<"3. icecream sandwitch\n";
	cout<<"select desert type:\n";
	cin>>n3;
	cout<<"enter number of dish:";
	cin>>n4;
	cout<<"prize:"<<m.prize(n1,n2,n3,n4)<<endl;	
		
	return 0;
}