#include <iostream>
using namespace std;

class Restro
{
	int dish[7],starter[5],desirt,quantity;
public:
	Restro()
	{
		int t=100,s=50;
		for (int i = 0; i < 7; ++i)
		{
			dish[i]=t+i*10;
			starter[i]=s+i*5;

		}
		desirt=40;
		quantity=0;
	}
	float prize(int s,int d)
	{
		float sum=0;
		while(s>0)
		{
			sum=sum+starter[s%10];
			s=s/10;
		}
		while(d>0)
		{
			sum=sum+dish[d%10];
			d=d/10;
		}
		sum=sum+desirt;
		sum=sum+sum*0.1236;
		return sum;
	}
};
int main(int argc, char const *argv[])
{
	Restro r;
	int dish=0,starter,n=0;
	while(n!=6)
	{
	cout<<"1. pizza\n";
	cout<<"2. \n";
	cout<<"3. \n";
	cout<<"4. \n";
	cout<<"5. \n";
	cout<<"6. Next\n";
	cout<<"select choice:\n";
	cin>>n;
	if(n<9)
		starter=starter+n*10;
	}

	while(n!=9)
	{
	cout<<"1. \n";
	cout<<"2. \n";
	cout<<"3. \n";
	cout<<"4. \n";
	cout<<"5. \n";
	cout<<"6. \n";
	cout<<"7. \n";
	cout<<"8. \n";
	cout<<"9. Next\n";
	cout<<"select choice:\n";
	cin>>n;
	if(n<9)
		dish=dish+n*10;
	}
	cout<<"\nprize:"<<r.prize(starter,dish);
	return 0;
}