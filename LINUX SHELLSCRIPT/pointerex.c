#include <stdio.h>
#include <stdlib.h>
void bubblesort(int *A,int n)
{	
	int i,j,temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j	 < n-1; ++i)
		{
			if (A[j] > A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int A[]={1,5,3,6,4,2};
	bubblesort(A,6);
	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
// #include <stdio.h>
 
// int main()
// {
//    int x, y, *a, *b, temp;
 
//    printf("Enter the value of x and y\n");
//    scanf("%d%d", &x, &y);
 
//    printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
//    a = &x;
//    b = &y;
 
//    temp = *b;
//    *b = *a;
//    *a = temp;
 
//    printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
//    return 0;
// }
// #define ALLOCSIZE 10000 /* size of available space */
// static char allocbuf[ALLOCSIZE]; /* storage for alloc */
// static char *allocp = allocbuf; /* next free position */
// char *alloc(int n)
// /* return pointer to n characters */
// {
// if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
// allocp += n;
// return allocp - n; /* old p */
// } else
// /* not enough room */
// return 0;
// }
// void afree(char *p) /* free storage pointed to by p */
// {
// if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
// allocp = p;
// }
// int addInt(int n, int m) {
//     return n+m;
// }

// First thing, let's define a pointer to a function which receives 2 ints and returns an int:

// int (*functionPtr)(int,int);

// Now we can safely point to our function:

// functionPtr = &addInt;

// Now that we have a pointer to the function, let's use it:

// int sum = (*functionPtr)(2, 3); // sum == 5

// Passing the pointer to another function is basically the same:

// int add2to3(int (*functionPtr)(int, int)) {
//     return (*functionPtr)(2, 3);
// }
#include <stdio.h>
void my_int_func(int x)
{
    printf( "%d\n", x );
}


int main()
{
    void (*foo)(int);
    foo = &my_int_func;

    /* call my_int_func (note that you do not need to write (*foo)(2) ) */
    foo( 2 );
    /* but if you want to, you may */
    (*foo)( 2 );

    return 0;
}