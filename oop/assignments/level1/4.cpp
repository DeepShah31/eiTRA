#include <iostream>
using namespace std;
class Movie
{
	int prs[3],mtype[4],sum;
public:
	Movie()
	{
		prs[0]=50;
		prs[1]=70;
		prs[2]=90;
		mtype[0]=50;
		mtype[1]=70;
		mtype[2]=90;
		mtype[3]=110;

	}
	int prize(int n1,int n2,int n3)    //n1 for sitting type and n2 is for movie type 
										//n3 is for number of tickets
	{

		sum=prs[n1-1]+mtype[n2-1];
		
		sum=sum*n3;
		return sum;
	}

};

int main(int argc, char const *argv[])
{
	Movie m;
	int n1,n2,n3;
	
	
	cout<<"1. 2D Hindi\n";
	cout<<"2. 3D Hindi\n";
	cout<<"3. 2D English\n";
	cout<<"4. 3D English\n";
	cout<<"select movie type:\n";
	cin>>n1;
	cout<<"1. silver\n";
	cout<<"2. gold\n";
	cout<<"3. platinum\n";
	cout<<"select setting type:\n";
	cin>>n2;
	cout<<"enter number of tickets:";
	cin>>n3;
	cout<<"prize:"<<m.prize(n1,n2,n3)<<endl;	
		
	return 0;
}