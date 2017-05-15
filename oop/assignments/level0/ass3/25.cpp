#include <iostream>
using namespace std;

int main()
{
	int i,j,k,l;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=10;j++)
			cout<<'*';
		cout<<endl;
	}

	cout<<"\n\n";

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			cout<<'*';
		cout<<endl;
	}	
	cout<<"\n\n";

	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
			cout<<' ';
		for(k=1;k<=i;k++)
			cout<<'*';
		cout<<endl;
	}
	cout<<"\n\n";

	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
			cout<<' ';
		for(k=1;k<2*i;k++)
			cout<<'*';
		cout<<endl;
	}
	cout<<"\n\n";

	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
			cout<<' ';
		for(k=1;k<2*i;k++)
			cout<<i;
		cout<<endl;
	}
	cout<<"\n\n";

	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
			cout<<' ';
		for(k=i;k>=1;k--)
			cout<<k;
		for(l=2;l<=i;l++)
			cout<<l;
		cout<<endl;
	}


	return 0;
}
/* o/p:-
**********
**********
**********
**********


*
**
***
****
*****


    *
   **
  ***
 ****
*****


    *
   ***
  *****
 *******
*********


    1
   222
  33333
 4444444
555555555


    1
   212
  32123
 4321234
543212345
*/