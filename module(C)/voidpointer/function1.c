#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int num(void * array)
{
    int result=*(int *)array;  
     
    return result;
}    
int main()
{
int i;

int array=10;
void *p=&array;
		
    printf("%d\n",num(p));




return 0;
}
