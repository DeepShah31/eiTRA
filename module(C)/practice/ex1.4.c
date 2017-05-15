#include<stdio.h>
main()
{ 
	int cel,fer;
	printf("emter tempreture");
        scanf("%d",&fer);
    while(fer<=572)
{
    cel= (0.55 * fer) - 32;
    printf("%d   %d\n",fer,cel);
    fer=fer+20;

}}
