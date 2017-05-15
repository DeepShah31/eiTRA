#include<stdio.h>
void main()
{
 int n, i, sum=0, fact=1;
 printf("Enter the number");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
  { 
   fact= fact * i;
   if(i%2 != 0)
 {

   sum= sum + fact;
  
 }
}
 printf("Addition of odd factorial  is %d\n",sum);
}

