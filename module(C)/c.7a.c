#include<stdio.h>
void main()
{
 int n, i, sum=0, fact=1;
 printf("Enter the number");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
  {
   fact= fact * i;
   sum= sum + fact;
}
 printf("Addition of factorial  is %d\n",sum);
}

