#include<stdio.h>
int strindex(char *s, char *t);
int main(void) {
 int flag=0;
 char str[50],search[10];
 puts("Enter a string:");
 gets(str);
 
 puts("Enter search substring:");
 gets(search);
 flag=strindex(str, search);
 if (flag == -1)
  printf("not found position:%d",flag);
 else
  printf("search found position is:%d",flag); 
}
 
//strindex: returns the right most index of t in s, -1 if none*/
int strindex(char s[], char t[]) {
 int k,i,j,pos;
 pos = -1;
 for(i=0;s[i] != '\0'; i++) {
  for(j=i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) ;
  if (k > 0 && t[k] == '\0')
   pos=i;
 } 
 return pos;
}