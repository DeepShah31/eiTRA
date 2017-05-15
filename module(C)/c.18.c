#include <stdio.h>
int main(int argc, char const *argv[])
{
	char s1[100],s2[100];
	printf("enter string to conver into lower case:\n");
	scanf("%s",s1);
	int i,j=0;
	for(i = 0; s1[i] != '\0'; i++,j++);
	{}
    for (int i = 0; i < j; ++i)
    {
    	s1[i]=s1[i]+32;
    }

    printf("concatinated string:%s\n", s1);
	return 0;
}                                   
