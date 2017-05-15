#include <iostream>
using namespace std;
class Book
{
	int bookno;
	string title;
	int price,total_cost;
	void totalcost(int n)
	{
		total_cost=n*price;
	}
public:
	void intput(int bookno1,string booktiite1,int price1)
	{
		bookno=bookno1;
		title=booktiite1;
		price=price1;
		
	}
	void purchase(int n)
	{
		totalcost(n);
		cout<<"\n\n";
		cout<<"Bookno="<<bookno<<endl;
		cout<<"booktiite="<<title<<endl;
		cout<<"price="<<price<<endl;
		cout<<"totalcost="<<total_cost<<endl;
	}


};
int main(int argc, char const *argv[])
{
	Book f;
	int Bookno;
	float price;
	string booktiite;
	int n;

	cout<<"Bookno=";
	cin>>Bookno;
	cout<<"booktiite=";
	cin>>booktiite;
	cout<<"price=";
	cin>>price;	
	cout<<"enter number of copies:";
	cin>>n;
	f.intput(Bookno,booktiite,price);
	f.purchase(n);
	return 0;
}