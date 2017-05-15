#include <stdio.h>
void conversion(float fahr,float upper,float celsius,float step)
{
	while (fahr <= upper) {
celsius = (5.0/9.0) * (fahr-32.0);
printf("%3.0f \t\t%6.1f\n", fahr, celsius);
fahr = fahr + step;
}
}
main()
{
float fahr, celsius;
float lower, upper, step;
lower = 0;
upper = 300;
step = 20;

printf("Fahrenheit\t Celsius\n");
fahr = lower;
conversion(fahr,upper,celsius,step);


}
