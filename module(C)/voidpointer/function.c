#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void *num(int array)
{
    void *result=&array;  
     
    return result;
}    
int main()
{
int i;

int array=10;
void *p=&array;
		
    printf("%d\n",*(int *)num(array));




return 0;
}
