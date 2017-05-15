#include <stdio.h>
#include <stdlib.h>
struct node
{
    // Any data type can be stored in this node
    void  *data;
    struct node *next;
};
 
// Function to add a node at the beginning of Linked List. 
//*new_data is pointer point to data to be added
void push(struct node** header, void *new_data, size_t data_size)
{
    // Allocate memory for node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
 
    new_node->data  = malloc(data_size);
    new_node->next = (*header);
 
    // Copy contents of new_data to newly allocated memory.
    // Assumption: char takes 1 byte.
    int i;
    for (i=0; i<data_size; i++)
        *(char *)(new_node->data + i) = *(char *)(new_data + i);
 
    // Change head pointer as new node is added at the beginning
    (*header) = new_node;
}
 
/* Function to print nodes in a given linked list. fptr is used
   to access the function to be used for printing current node data */
void printList(struct node *node, void (*fptr)(void *))
{
    while (node != NULL)
    {
        (*fptr)(node->data);
        node = node->next;
    }
}
 
// Function to print an integer
void printInt(void *n)
{
   printf(" %d", *(int *)n);
}
 
// Function to print a float
void printFloat(void *f)
{
   printf(" %f", *(float *)f);
}