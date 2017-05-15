#include<stdio.h>
main()
{ 
	int cel,fer;
	printf("emter tempreture");
        scanf("%d",&cel);
    while(cel>=0)
{
    fer= (1.8 * cel) + 32;
    printf("%d   %d\n",cel,fer);
    cel=cel-20;

}}
