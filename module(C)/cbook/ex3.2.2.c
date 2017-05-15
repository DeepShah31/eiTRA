#include<stdio.h>
void escape(char s[],char t[]);
main()
{
	char s[40];
	char t[40]="helo	world b\n";
	escape(s,t);
	printf("%s\n",s);
}

void escape (char s[] ,char t[])
{
		int i=0;
		int j=0;
	while(t[i] != '\0')
	{	
		switch(t[i])
		{
			case('\t'):
			s[j]='\\';
			s[j+1]='t';
			j=j+1;
			break;

			case('\n'):
			s[j]='\\';
			s[j+1]='n';
			j=j+1;
			break;


			default:
			s[j]=t[i];

		}   
		i++;
		j++;
		
	}
	
}