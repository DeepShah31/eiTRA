#include <stdio.h>
int main(int argc, char const *argv[])
{
	 int len,max,c,lim=10;
    char line[100],maxline[100],s[100];

    max =0;
    for(int i=0; i < lim  ;++i) {
         c = getchar();
      //  if (c == EOF)
        //        break;
        if (c == '\n')
                break;
        s[i] = c;
}
printf("\n%s\n", s);
	return 0;
}
