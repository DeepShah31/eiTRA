#include <stdio.h>
int main()
{

float a1,a2,a3,sum;
printf("enter three angles a1,a2,a3");
scanf("%f%f%f",&a1,&a2,&a3);
sum=a1+a2+a3;
if(sum==180)
printf("triangle is valid");
else
printf("triangle is not valid");

}
/*OUTPUT
enter three angles a1,a2,a360
60
60
triangle is valid*/