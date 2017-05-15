#include<stdio.h>
void expand(char *,char *);
main()
{
	char s1[40]="c-p";
	char s2[40]="";
	//printf("%c %c\n",s1[0],s1[2] );
	expand(s1,s2);
	//printf("%s\n",s1);
}

void expand (char s[] ,char s2[])
{
int i;
		for(i=s[0];i<=s[2];i++)
		{
			//printf("%c ",i);
			s2[i-'a']=(char)i;
           printf("%c ",s2[i-'a']);
		}
	
	
}