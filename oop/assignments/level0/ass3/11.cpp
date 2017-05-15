#include <iostream>
using namespace std;

int main()
{
	int sub1,sub2,sub3,sub4,sub5,percentage;
	cout<<"Enter marks of five subjects : ";
	cin>>sub1>>sub2>>sub3>>sub4>>sub5;
	percentage=(sub1+sub2+sub3+sub4+sub5)/5;

	if(percentage>=60)
		cout<<"Ist division";
	else if(percentage>=50)
		cout<<"IInd division";
	else if(percentage>=40)
		cout<<"IIIrd division";
	else
		cout<<"Fail" ;


	return 0;
}
/*Enter marks of five subjects : 50
66
85
45
13
IInd division	*/