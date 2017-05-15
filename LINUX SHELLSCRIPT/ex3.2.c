#include<stdio.h>
main()
{
	int digit[10],whitespace,other;
	for (int i = 0; i < 10; ++i)
	{
		digit[i]=0;
	}
	while(char c != EOF)
	{
		switch(c)
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			digit[c]++;
			break;
			case ' ':
			case '\n':
			case '\t':
			whitespace++;
			break;
			default:
			other++;
			break;
		}
	}
	printf("digits is=");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",digit[i]);
	}
	printf("whitespace is =%d other is %d\n",whitespace,other);
}