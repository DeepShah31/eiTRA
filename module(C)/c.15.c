#include<stdio.h>
void main()
{
 int a, b, c=0, n;
 printf("Enter the number\n");
 scanf("%d",&n);
a=n;
 while (a >0)
  {
   b=a%10;
   c=(c*10)+b;
   a= a/10;
  }
if(n == c)
printf("%d is palindrome\n",n);
else
printf("%d is not Palindrome\n",n);
}

