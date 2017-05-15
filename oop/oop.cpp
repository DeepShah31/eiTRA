#include <iostream>
using namespace std;
class calculator
{
	float num1,num2;

public:
	// calculator()
	// {
	// 	num1=0.0;
	// 	num2=0.0;
	// }
	calculator(float num1,float num2)
	{
		this->num1=num1;
		this->num2=num2;
	}
	float FindCalculation(char ch)
	{
		
		switch(ch)
		{ 
			case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
		}

	}
};
int main(int argc, char const *argv[])
{
		//calculator obj;
	calculator obj1(1,2.2);
	obj1.FindCalculation('*');
	return 0;
}