#include<stdio.h>
#include<string.h>
void main()
{
 char str1[12];
 char str2[12]; 
 printf("Enter the string");
 scanf("%s%s",str1,str2);
  strcat(str1,str2);
 printf("final string is %s\n",str1);
}
