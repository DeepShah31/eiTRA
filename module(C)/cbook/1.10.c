#include <stdio.h>
/* count lines in input */
main()
{
int c, nl=0,t=0,b=0,i=0;
char cc[100];
nl = 0;
printf("write z to exit\n");
while ((c = getchar()) != 'z')
{
	cc[i]=c;
	if (c == '\n' ||c=='\t')
	{
		cc[i]=' ';
	}
	else 
	{
		cc[i]=c;
	}
	i++;
}
printf("%s", cc);

}
