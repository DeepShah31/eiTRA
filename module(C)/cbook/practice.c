#include<stdio.h>
main(int argc, char const *argv[])
{
int a=10,b=20;
int *ap,*bp;
ap=&a;
bp=&b;
swap(&a,&b);
printf("%d %d \n",*ap,*bp);
}
swap(int *ap,int *bp)
{
	int temp;
	temp=*ap;
	*ap=*bp;
	*bp=temp;
}
