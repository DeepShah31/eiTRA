#include <stdio.h>
#define MAXLINE 1000
char longest[MAXLINE];

int dgetline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
int len;

int max;
char line[MAXLINE];

max = 0;
while ((len = dgetline(line, MAXLINE)) > 1)
{

}
if (max > 0)
//printf("string:%s\nlength:%d\n", longest,max);
return 0;
}

int dgetline(char s[],int lim)
{
int c, i;
for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
s[i] = c;
if (c == '\n') {
s[i] = c;
++i;
}
s[i] = '\0';
if (i>80)
{
	printf("\nstring contain more than 80 char:\n\n%s\n", s);
}
return i;

}
