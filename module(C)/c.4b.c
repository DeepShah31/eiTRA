#include<stdio.h>
void main()
{
  int i, j, k, n;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=n; i>0; i--)
  {
   for(j=0; j<i; j++)
    {
       printf(" ");
     } 
     for(k=0; k<=n; k++)
     {
       if(i<=k)
       printf("*");
     }
   printf("\n");
 }
}

