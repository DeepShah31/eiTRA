#include <iostream>
using namespace std;
class PUBLISHER
{
	char Pub[12];
	double Turnover;
protected:
	void Register();
public:
	PUBLISHER(){}
	void Enter(){}
	void Display(){}
};
class BRANCH
{
	char CITY[20];
protected:
	float Employees;
public:
	BRANCH(){}
	void Haveit()
	{}
	void Giveit(){}
};

class AUTHOR:private BRANCH,public PUBLISHER
{
	int Acode;
    char Aname[20];
	float Amount;
public:
	AUTHOR(){}
	void Start(){}
	void Show(){}
};

/* i) Write the names of data members, which are accessible from objects belonging to class AUTHOR.
ANS:-no data member
ii) Write the names of all the member functions which are accessible from objects belonging to class BRANCH.
ANS/;-haveit(),giveit().
iii) Write the names of all the members which are accessible from member functions of class AUTHOR.
member function: register(),  enter(), display(), Haveit(), Giveit(), Start(), Show().
iv) How many bytes will be required by an object belonging to class AUTHOR? 
ANS:-80
*/
int main(int argc, char const *argv[])
{
	// AUTHOR au;
	// au.Acode=10;
	// au.Aname='s';
	// au.Amount=50.87;
	//au.Turnover=2989;
	// cout<<au.Acode;
	// cout<<au.Aname;
	// cout<<au.Amount;
	BRANCH br;
	br.Haveit();
	br.Giveit();
	AUTHOR au;
	au.Start();
	au.Show();
	cout<<sizeof(au);//80
	return 0;
}