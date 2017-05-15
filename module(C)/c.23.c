#include <stdio.h>

  
int getGcd(int a, int b);
int main(){
    int num1, num2, gcd, lcm;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    gcd = getGcd(num1, num2);
    lcm = (num1 * num2)/ gcd;
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    
    return 0;
}
 int getGcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  else {
    return getGcd(b, a % b);
  }

}
