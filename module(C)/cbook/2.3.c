#include <stdio.h>
int htoi(char s[])
{
int hexdigit,i,inhex,n;
i = 0;
if( s[i] == '0')
{
    ++i;
    if(s[i] == 'x' || s[i] == 'X')
        ++i;
}

n = 0;
inhex = 1;

for(;inhex==1;++i)
{
    if(s[i] >='0' && s[i] <='9')
        hexdigit= s[i] - '0';
    else if(s[i] >='a' && s[i] <='f')
        hexdigit= s[i] -'a' + 10;
    else if(s[i] >='A' && s[i] <='F')
        hexdigit= s[i] -'A' + 10;
    else
        inhex = 0;

    if(inhex == 1)
        n = 16 * n + hexdigit;
}
return n;
}

int main(int argc, char const *argv[])
{
	char a[2];
	scanf("%s",a);
	// a[0]='2';
	// a[1]='0';
	printf("%d\n",htoi(a) );	
	return 0;
}
