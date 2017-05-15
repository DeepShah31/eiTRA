#include <stdio.h>
int main()
{
	int c,prev='*';
	while(1)
	{
		c=getchar();

		if(c == EOF)
			break;
		if(c == ' ')
		{
			if(prev != ' ')
			{
				putchar(c);
			}
			else
			{
				putchar(c);
			}

				prev=c;
	
		}
	}
return 0;

}
