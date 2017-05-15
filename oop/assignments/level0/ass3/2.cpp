#include<iostream>
using namespace std;


int main()
{
	int a;
	cout<<"Enter any number:";
	cin>>a;

	if(a>0)
		cout<<"The absolute value of number is:"<<a;
	else
		cout<<"The absolute value of number is:"<<-(a);


	return 0;
}
/*The absolute value of number is:0deep@deep-Satellite-L50-B:~/oop/assignments/level0/ass3$ ./a.out
Enter any number:-9
The absolute value of number is:9deep@deep-Satellite-L50-B:~/oop/assignments/level0/ass3$ */
