/*Define a class batsman with the following specifications:
Private members:
bcode	4 digits code number
bname	20 characters
innings, notout, runs	integer type
batavg	it is calculated according to the formula 
 	batavg =runs/(innings-notout)
calcavg()	Function to compute batavg
Public members:
readdata()	Function to accept value from bcode, name, innings,  
 	notout and invoke the function calcavg()
displaydata()	Function to display the data members on the screen. */
#include <iostream>
using namespace std;
class batsman{
int bcode;
char bname[20];
int innings,notout,runs;
void batavg()
{
	float batavg;
	batavg=(runs)/(innings-notout);
	cout<<batavg;
}
public:
float Takedata()
{
	cout<<"enter bcode"<<"\n";
	cin>>bcode;
	cout<<"enter bname"<<"\n";
	cin>>bname;
	cout<<"enter innings\n";
	cin>>innings;
	cout<<"enter notout\n";
	cin>>notout;
	batavg();
}
	void Showdata()
	{	
		cout<<"\n";
		cout<<"######################\n";
		cout<<"this info entred by user\n";
		cout<<"batsma code  is\n"<<bcode<<"\n";
		cout<<"batsman name is\n"<<bname<<"\n";
		cout<<"batsman innings is\n"<<innings<<"\n";
		cout<<"batavg notout is\n"<<notout<<"\n";

	}
};
int main(int argc, char const *argv[])
{
	batsman bt;
	bt.Takedata();
	//st.ctotal();
	bt.Showdata();
	return 0;
}