#include<stdio.h>
int main()
{
  int c, i, j; 
  int a[5] = {55, 98, 23, 67, 29};
  int b[1];
  printf("Enter the element you want");
  scanf("%d",&b[1]);
  for(i=0; i<5; i++)
  {
    for (j=i+1; j<5; j++)
    {
      if(a[i] = b[j])
       {
        printf("%d element is in %d\n",b[1],i+1);
       }
  }   }
   printf("%d",i+1);
  
 
}

