#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"enter days:";
	cin>>n;
	cout<<"year:"<<n/365<<endl;
	n=n-(n/365)*365;
	//cout<<n;
	cout<<"month:"<<n/30<<endl;
	n=n-(n/30)*30;
	cout<<"days:"<<n<<endl;
	
	
	
	
	return 0;
}