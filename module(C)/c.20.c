#include<stdio.h>
void main()
{
 int a;
 printf("Enter the year\n");
 scanf("%d",&a);
 if (a%4 == 0)
 printf("%d year is a leap year\n",a);
 else
  printf("%d year is not a leap year\n",a);
}
