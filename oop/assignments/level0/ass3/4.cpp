#include <iostream>



int main()
{
	int cp,sp,result;

	cout<<"Enter cost price of item : ";
	cin>>cp;
	cout<<"Enter selling price of item : ";
	cin>>sp;

	result=sp-cp;

	if(result>0)
		cout<<"Profit : "<<result;
	else
		if(result<0)
    			cout<<"Loss : "<<-(result);
		else
			cout<<"No profit no loss";

	getch();
	return 0;
}
/*OUTPUT
Enter cost price of item : 800
Enter selling price of item : 950
Profit : 150/*