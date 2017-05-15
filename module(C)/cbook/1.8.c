#include <stdio.h>
/* count lines in input */
main()
{
int c, nl=0,t=0,b=0;
nl = 0;
printf("write z to exit\n");
while ((c = getchar()) != 'z')
if (c == '\n')
++nl;
else if (c=='\t')
{
	t++;
	/* code */
}
else if(c==' ')
{
	b++;
}
printf("blank:%d\t newline:%d\t tab:%d\n", b,nl,t);
}
