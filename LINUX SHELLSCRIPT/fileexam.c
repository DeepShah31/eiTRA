#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
   FILE *fp;
   char ch;
   int num;
   int  count=0;
 
   printf("Enter the value of num : ");
   scanf("%d", &num);
 
   fp = fopen("test.txt", "r");
   if (fp == NULL) {
      puts("cannot open this file");
      exit(1);
   }

   //fseek(fp, num, SEEK_SET);
   
   fseek(fp, 0, SEEK_SET);
for (int i = 0; i < num; ++i)
   {
   	ch=fgetc(fp);
   	printf("%c\n",ch);
   }
 
   fclose(fp);
   return(0);
}