#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	FILE *fp1,*fp2;
	char a;

	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");

	do{

	  a=fgetc(fp1);
        // writing in the file
        fputc(a, fp2);   
        
    }while(a!=EOF);
	return 0;
}