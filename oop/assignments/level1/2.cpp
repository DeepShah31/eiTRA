#include <iostream>
using namespace std;
class Grade
{
public:
	int g[8];
	int i=0;
	Grade()
	{
		for (int i = 0; i < 8; ++i)
		{
			g[i]=0;
		}
	}
	void add(int a)
	{
		g[i]=a;
		i++;
		//cout<<i;
	}
	float cpi()
	{
		if(i==8)
		{
			int sum=0;
			for (int i = 0; i < 8; ++i)
			{
				sum=sum+g[i];
				
			}	
			float aaa=(float)sum/8;

			return aaa;
		}
	}
};

int main(int argc, char const *argv[])
{
	Grade g;
	cout<<"enter your 8 sem CGPA:";
	for (int i = 0; i < 8; ++i)
	{
		int a;
		cin>>a;
		g.add(a);
	}
	cout<<endl<<"cpi:";
	cout<<g.cpi();
	
	return 0;
}