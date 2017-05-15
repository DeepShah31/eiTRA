#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int Arr[100],n,temp;
cout<<"Enter number of elements you want to insert ";
cin>>n;

for(int i=0;i<n;i++)
{
cout<<"Enter element "<<i+1<<":";
cin>>Arr[i];
}

temp=Arr[0];
Arr[0]=Arr[n-1];
Arr[n-1]=temp;

cout<<"\nArray after swapping"<<endl;

for(int i=0;i<n;i++)
cout<<Arr[i]<<" "; 
	return 0;
}
/*Enter number of elements you want to insert 5
Enter element 1:12
Enter element 2:13
Enter element 3:14
Enter element 4:15
Enter element 5:16

Array after swapping
16 13 14 15 12*/