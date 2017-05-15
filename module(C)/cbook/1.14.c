#include<stdio.h>
int main()
{
    int c;
   int character[128]={0};
    while((c=getchar()) != EOF)
        character[c]++;
    for (int i = 0; i <128; ++i)
    {
        if (character[i]==0)continue;
            putchar(i);
        for (int j = 0; j < character[i]; ++j)
        {

             
            putchar('*');
            putchar('\n');
        }
    }
}
