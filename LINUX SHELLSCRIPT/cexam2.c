#include<stdio.h>
void main()
{
  int i, j, k, n;
  printf("Enter the rows");
  scanf("%d",&n);
  for(i=n; i>0; i--)//for rows
  {
   for(j=0; j<i; j++)//this loop is for space
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
