#include<stdio.h>

int main(int argc,char * argv[])
{
	FILE *in1,*in2;
	int a,b;
	int i=0;
	in1=fopen(argv[1],"r");
	if(in1==NULL)
	printf("null");
	in2=fopen(argv[2],"r");
		a=fgetc(in1);

		b=fgetc(in2);
	while(a!=EOF&&b!=EOF)
	{	i++;
		a=fgetc(in1);
		b=fgetc(in2);
		if(a!=b)
		{
			printf("file are differ from %d location",i+1);	
			break;
		}
		
		//printf("%c",a);

	}	
	fclose(in1);
	fclose(in2);
	return 0;

}