#include<stdio.h>
void main()
{
 int a, i, b=0, c=1, sum=0;
 printf("Enter the number\n");
 scanf("%d",&a);
 for(i=0; i<=a; i++)
 {
  sum= b + c;
  b=c;
  c=sum;
  printf("%d ",sum);
 } 
 printf("\n");
}
