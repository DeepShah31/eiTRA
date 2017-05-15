#include <iostream>
#include <cctype>
using namespace std;
int main(int argc, char const *argv[])
{
	char ch;
	cout<<"enter any character";
	cin>>ch;
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        cout<<"you entered alphabet";
    else
        if(ch>='0'&&ch<='9')
           cout<<"you entered number";
        else
            cout<<"you entered special character";
	return 0;
}
/*enter any character A
you entered alphabet*/