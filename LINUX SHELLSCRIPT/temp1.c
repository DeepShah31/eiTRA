#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	FILE *fp;
	fp=fopen("temp.txt","w");
	printf("%p\n",fp);
	return 0;
}
