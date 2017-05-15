#include<stdio.h>
void main()
{
 int n, i, sum=0;
 printf("Enter the number");
 scanf("%d",&n);
 for(i=0; i<=n; i++)
{
  if (i%2 != 0)

  {
   sum= sum + i;
  }
}
 printf("Addition  is %d\n",sum);
}

