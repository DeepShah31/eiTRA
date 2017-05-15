#include<stdio.h>
void main()
{
 int b, i, j, a[5]= {6,25,61,8,56};
  for(i=0; i<5; i++)
  {
    for (j=i+1; j<5; j++)
    {
      if(a[i] > a[j])
       {
        b = a[i];
        a[i] = a[j];
        a[j] = b;
       }
     }
   
    printf("%d\n",a[i]);
   }
}
                                   
