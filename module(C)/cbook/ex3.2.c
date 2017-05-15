#include<stdio.h>
main()
{
	int c,digit[10],whitespace,other;
	for (int i = 0; i < 10; ++i)
	{
		digit[i]=0;
	}
	while((c=getchar()) != EOF)
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
			//printf("%c\n",c );
			digit[c-'0']++;
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