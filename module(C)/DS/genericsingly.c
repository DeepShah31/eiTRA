#include <stdio.h>
#include <stdlib.h>
extern void push(struct node** header, void *new_data, size_t data_size);
extern void printList(struct node *node, void (*fptr)(void *));
extern void printInt(void *n);
extern void printFloat(void *f);
int main()
{
    struct node *start = NULL;
 
    // Create and print an int linked list
    unsigned int_size = sizeof(int);
    int arr[] = {50, 10, 40, 20, 60}, i;
    for (i=4; i>=0; i--)
       push(&start, &arr[i], int_size);
    printf("integer linked list is \n");
    printList(start, printInt);
 
    // Create and print a float linked list
    unsigned float_size = sizeof(float);
    start = NULL;
    float arr2[] = {50.1, 10.2, 40.4, 20.2, 60.6};
    for (i=4; i>=0; i--)
       push(&start, &arr2[i], float_size);
    printf("\n\nfloat linked list is \n");
    printList(start, printFloat);
 
    return 0;
}