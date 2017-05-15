#include <iostream>
using namespace std;
class student{
int admno;
char sname[20];
float eng,math,science;
float total;

float ctotal()
{
	float sum;
	sum=eng+math+science;
	cout<<"sum of number is\n"<<sum<<"\n";
}
public:
float Takedata()
{
	cout<<"enter admno"<<"\n";
	cin>>admno;
	cout<<"enter sname"<<"\n";
	cin>>sname;
	cout<<"enter english mark\n";
	cin>>eng;
	cout<<"enter maths mark\n";
	cin>>math;
	cout<<"enter science mark\n";
	cin>>science;
	ctotal();
}
	void Showdata()
	{	
		cout<<"\n";
		cout<<"######################\n";
		cout<<"this info entred by user\n";
		cout<<"student number is\n"<<admno<<"\n";
		cout<<"student name is\n"<<sname<<"\n";
		cout<<"english mark is\n"<<eng<<"\n";
		cout<<"maths mark is\n"<<math<<"\n";
		cout<<"science mark is \n"<<science<<"\n";

	}
};
int main(int argc, char const *argv[])
{
	student st;
	st.Takedata();
	//st.ctotal();
	st.Showdata();
	return 0;
}