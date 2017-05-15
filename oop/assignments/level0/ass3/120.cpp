#include <iostream>
using namespace std;

int main()
{
	int n, sum_p=0, sum_n=0, sum_z=0;
	char choice;

	do
	{
		cout<<"Enter number ";
		cin>>n;

		if(n>0)
			sum_p++;
		else if(n<0)
			sum_n++;
		else
			sum_z++;

		cout<<"Do you want to Continue(y/n)? ";
		cin>>choice;

	}while(choice=='y' || choice=='Y');


	cout<<"Positive Number :"<<sum_p<<"\nNegative Number :"<<sum_n<<"\nZero Number :"<<sum_z;


	return 0;
}
/*Enter number 45
Do you want to Continue(y/n)? y
Enter number -09
Do you want to Continue(y/n)? y
Enter number 67
Do you want to Continue(y/n)? n 
Positive Number :2
Negative Number :1
Zero Number :0*/