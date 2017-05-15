#include <iostream>
using namespace std;
class Report
{

	int adno;
	char name[20];
	float marks[5],avg;
	void getavg()
	{
		for (int i = 0; i < 5; ++i)
		{
			avg=avg+marks[i];
		}
		avg=avg/5;
	}
public:
	Report()
	{
		avg=0;
	}
	void readinfo(int adno,char name[],float marks[])
	{
		this->adno=adno;
		//this->name=name;
		//this->marks=marks;
		for (int i = 0; i < 20; ++i)
		{
			this->name[i]=name[i];
			if(i<5)
			this->marks[i]=marks[i];
		}
		getavg();
	}
	void display()
	{
		cout<<"adno="<<adno<<endl;
		cout<<"name="<<name<<endl;
		cout<<"marks=";
		for (int i = 0; i < 5; ++i)
		{
			cout<<marks[i]<<" ";
		}
		cout<<endl<<"average="<<avg;	
	}
};
int main(int argc, char const *argv[])
{
	
	Report r;
	int adno;
	char name[20];
	float marks[5];
	

	cout<<"adno=";
	cin>>adno;
	cout<<"name=";
	cin>>name;
	cout<<"marks=";
	for (int i = 0; i < 5; ++i)
	{
		cin>>marks[i];
	}	

	r.readinfo(adno,name,marks);
	r.display();
	return 0;
}