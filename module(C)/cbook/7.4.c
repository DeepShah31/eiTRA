#include <stdio.h>
#include <stdarg.h>
void minprintf(char *fmt, ...)
{
	va_list ap; /* points to each unnamed arg in turn */
	char *p, *sval;
	int ival;
	double dval;
	char cval;
	va_start(ap, fmt); /* make ap point to 1st unnamed arg */
	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putchar(*p);
			continue;
		}
	switch (*++p) {
		case 'd':						//for integer
			ival = va_arg(ap, int);
			printf("%d\n", ival);
			break;
		case 'f':						//for float value
			dval = va_arg(ap, double);
			printf("%f\n", dval);
			break;
		case 's':						//for string
			for (sval = va_arg(ap, char *); *sval; sval++)
				putchar(*sval);
				break;
		case 'c':						//for character
			cval=va_arg(ap,int);
			printf("%c\n", cval);
			break;
		default:
			putchar(*p);
			break;
		}
	}
va_end(ap); /* clean up when done */
}
int main(int argc,char * argv[])
{
	char a[100];
	scanf("%s",a);
	minprintf("%s",a);
	return 0;

}