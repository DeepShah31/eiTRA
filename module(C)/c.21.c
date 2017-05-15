#include<stdio.h>
void main()
{
  int i, j, n, a=1;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=0; i<=n; i++)
  {
    for(j=1; j<=i; j++)
    {  
      printf("%d",a);
      a++;
    }
   printf("\n");
}
}

