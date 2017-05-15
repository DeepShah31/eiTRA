#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
float net=5689.2356;
cout<<"Employee's net pay is: ";
cout.precision(2);
cout.setf(ios::fixed|ios::showpoint);
cout<<net<<endl;
	return 0;
}
//output:"Employee's net pay is: 5689.24"