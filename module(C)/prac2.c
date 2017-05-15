#include<stdio.h>
union a
  {
   int b;
   char c;
  }u;
struct z
{
 char d;
 //u.b=45;
 float f;
}s;
 int main()
 { 
 printf("%d\n",(int)sizeof(u));
}

