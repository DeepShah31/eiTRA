#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

 inline int fun(int a)
{
	int sum=0;
	for (int i = 0; i < a; ++i)
	{
		sum=sum+i;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	clock_t tStart = clock();
	cout<<fun(10000000);
	 printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	 return 0;
}