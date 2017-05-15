#include<stdio.h>
#include<math.h>

#define MAXLEN 100

void itoa(int n,char s[]);
int main(void)
{
    int n;
    char s[MAXLEN];
    printf("Enter the integer number ");
    scanf("%d",&n);
    itoa(n,s);
    printf("String: %s",s);
    printf("\n");
    return 0;
}

void itoa(int n,char s[])
{
    static int i;
    if(n/10)
        itoa(n/10,s);
    else
    {
        i = 0;
        if( n < 0)
            s[i++]='-';
    }
    s[i++] = abs(n) % 10 + 'a';
    s[i] = '\0';
}
