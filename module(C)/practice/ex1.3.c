#include<stdio.h>
main()
{ 
	int cel=0,fer;
	printf("emter tempreture");
        scanf("%d",&cel);
    while(cel<=300)
{
    fer= (1.8 * cel) + 32;
    printf("%d   %d\n",cel,fer);
    cel=cel+20;

}}
