#include <iostream>
using namespace std;
class Drug
{
	char Category[10];
	char Date_of_manufacture[10];
	char Company[20];
public:
	Drug(){}
	void enterdrugdetails(){}
	void showdrugdetails(){}
};
class Tablet : public Drug
{
protected:
	char tablet_name[30];
	char Volume_label[20];
public:
	float Price;
	Tablet(){}
	void entertabletdetails(){}
	void showtabletdetails (){}
};
class PainReliever : public Tablet
{
	int Dosage_units;
	char Side_effects[20];
	int Use_within_days;
public:
	PainReliever(){}
	void enterdetails(){}
	void showdetails(){}
};
// (i) How many bytes will be required by an object of class Drug and an object of class PainReliever respectively ?
//ANS:-class drug:-40 and class painreliver:-124
// (ii) Write names of all the data members which are accessible from the object of class PainReliever.
//ANS:-price
// (iii) Write names of all the members accessible from member functions of class Tablet.
//- Member Function :  enterdrugdetail(), showdrugdetail(), entertabletdetail(), showtabletdetails() 
 // Data Member:  tablet_name, volume_label, price
// (iv) Write names of all the member functions which are accessible from objects of class PainReliever.
//enterdetails(),showdetails(),enetrtabletdetail,showtabletdetail,enterdruddetail,showdrugdetail.
int main(int argc, char const *argv[])
{
	Drug dr;
	PainReliever pr;
	//pr.Dosage_units=20;//bcz of private
	// pr.tablet_name=s;
	// pr.Volume_label=s;
	pr.Category=aa;
	pr.Price=100;//it will access bcz piblic
	cout<<pr.Price;
	cout<<sizeof(dr)<<"\n";
	cout<<sizeof(pr)<<"\n";
	return 0;
}