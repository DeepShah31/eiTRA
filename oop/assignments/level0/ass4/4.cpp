#include <iostream>
using namespace std;

void showprime(int, int);

int main()
{

    int x,y;
    cout<<"Enter first  number : ";
    cin>>x;

    cout<<"Enter second  number : ";
    cin>>y;
    showprime(x,y);

    
    return 0;
}

void showprime(int a, int b)
{
    bool flag;

    for(int i=a+1;i<=b;i++)
    {

        flag=false;
        for(int j=2;j<i;j++)
        {

            if(i%j==0)
            {
                flag=true;
                break;
            }
        }

        if(flag==false && i>1)
            cout<<i<<endl;
    }
}
/*Enter first  number : 12
Enter second  number : 19
13
17
19*/