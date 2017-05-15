/*Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members 
- A function SCHEDULE() to allow user to enter values for TestCode, Description, NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members */
#include <iostream>
//#include <string>
using namespace std;
class TEST{
int TestCode,NoCandidate,CenterReqd;
string Description;
void CALCNTR()
{
	float nc;
	nc=(NoCandidate/100)+1;
	cout<<nc;
}
public:
float Takedata()
{
	cout<<"enter TestCode"<<"\n";
	cin>>TestCode;
	cout<<"enter description"<<"\n";
	cin>>Description;
	cout<<"enter NoCandidate\n";
	cin>>NoCandidate;
	CALCNTR();
}
	void Showdata()
	{	
		cout<<"\n";
		cout<<"######################\n";
		cout<<"this info entred by user\n";
		cout<<"TestCode code  is\n"<<TestCode<<"\n";
		cout<<"description is\n"<<Description<<"\n";
		cout<<"NoCandidate is\n"<<NoCandidate<<"\n";
		
	}
};
int main(int argc, char const *argv[])
{
	TEST bt;
	bt.Takedata();
	//st.ctotal();
	bt.Showdata();
	return 0;
}