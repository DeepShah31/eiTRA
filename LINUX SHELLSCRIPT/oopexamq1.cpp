#include <iostream>
using namespace std;

class employee
{
public:
	int emp_id;
	char emp_name[50];

	void acceptdataemployee()//accept only employee data
	{
		cout<<"enter emp_id";
		cin>>emp_id;
		cout<<"enter emp_name";
		cin>>emp_name;
	}
	void displaydataemployee()//display only employee data
	{
		cout<<"employee id is"<<emp_id;
		cout<<"employee name is"<<emp_name;

	}
};
class emp_union
{
public:
	int member_id;

	void acceptdataempunion()//accept only emp_union data
	{
		cout<<"enter member_id\n";
		cin>>member_id;
	}
	void displaydataempunion()//display only emp_union data
	{
		cout<<"member_id is\n"<<member_id;
	}
};
class emp_info:public employee,protected emp_union//inheritence
{
public:
	int basic_salary;
	
	void acceptdata()
	{
		cout<<"enter basic_salary\n";
		cin>>basic_salary;
	}
	void displaydata()
	{
		cout<<"basic_salary is\n"<<basic_salary;
	}
};

int main(int argc, char const *argv[])
{
	employee emp;
	emp_union empu;
	emp_info empi;
	// emp.acceptdataemployee();
	// emp.displaydataemployee();
	// empu.acceptdataempunion();
	// empu.displaydataempunion();
	empi.acceptdataemployee();//access acceptdataemployee() function using object of emp_info
	empi.displaydataemployee();
	empi.acceptdataempunion();
	empi.displaydataempunion();
	empi.acceptdata();
	empi.displaydata();
	return 0;
}
