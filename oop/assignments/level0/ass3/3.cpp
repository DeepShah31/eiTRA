#include<iostream>
using namespace std;


int main()
{
	int totalexp, qty, price, discount;

	cout<<"Enter quantity:";
	cin>>qty;
	cout<<"Enter price:";
	cin>>price;

	totalexp=qty*price;

	if(totalexp>5000)
	{
		discount=(totalexp*0.1);
		totalexp=totalexp-discount;
	}

	cout<<"Total Expense is  Rs. "<<totalexp;


	return 0;
}
/*OUTPUT
deep@deep-Satellite-L50-B:~/oop/assignments/level0/ass3$ ./a.out
Enter quantity:12
Enter price:34
Total Expense is  Rs. 408deep@deep-Satellite-L50-B:~/oop/assignments/level0/ass3$*/ 
