#include<stdio.h>
union a
{  
  int a;
  char c;
}s;
 int main()
 {
  scanf("%d",&s.a);
  s.c='a';
  printf("%d\n",s.a);
}
