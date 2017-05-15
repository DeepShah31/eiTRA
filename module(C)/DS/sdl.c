#include <stdio.h>
#include <stdlib.h>
//#include <pthread.h>

//Create a basic structure for NODE from which new nodes can be created.
struct node
{
    int data;
    struct node *link;
   // pthread_spinlock_t lock;
};

//Initialize 3 pointers as globals so that they do not need to be passed in functions.
struct node *header, *ptr, *temp;
int count=0;
//Prototypes for various user defined functions.
void insert_front();
void insert_end();
void insert_any();
void display();
void delete();

void main()
{
    int choice;
    int cont = 1;

    //Allocate memory for header node.
    header = (struct node *) malloc(sizeof(struct node));


    //Set the content of header node
    header->data = NULL;
    header->link = NULL;

    while(cont == 1)
    {
        //Display menu to the user
        printf("\n1. Insert at front\n");
        printf("\n2. Insert at end\n");
        printf("\n3. Insert at any position\n");
        printf("\n4. delete linked list\n");
        printf("\n5. display linked list\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert_front();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_any();
                break;
            case 4:
                delete();
                break;
            case 5:
                display();
                break;
        }

        printf("\n\nDo you want to continue? (1 / 0): ");
        scanf("%d", &cont);
    }

}

//Function to insert a node at the front of a single linked list.
void insert_front()
{
    int data_value;

    printf("\nEnter data of the node: ");
    scanf("%d", &data_value);

    temp = (struct node *) malloc(sizeof(struct node));
    if(count!=0)
    {
    temp->data = data_value;
    temp->link = header;
    header = temp;
    }
    else
    {
    	temp->data=data_value;
    	temp->link=NULL;
    	header=temp;
    	count++;
    }
    
}

//Function to insert a node at the end of a single linked list.
void insert_end()
{
    int data_value;

    printf("\nEnter data of the node: ");
    scanf("%d", &data_value);

    temp = (struct node *) malloc(sizeof(struct node));

    //Traverse to the end of the linked list.
    ptr = header;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    temp->data = data_value;
    temp->link = ptr->link;
    ptr->link = temp;
}

//Function to insert a node at any position after a particular node.
void insert_any()
{
    int data_value, key;

    printf("\nEnter data of the node: ");
    scanf("%d", &data_value);
    printf("\nEnter data of the node after which new node is to be inserted: ");
    scanf("%d", &key);

    temp = (struct node *) malloc(sizeof(struct node));

    //Traverse till key is found or end of the linked list is reached.
    ptr = header;
    while(ptr->link != NULL && ptr->data != key)
    {
        ptr = ptr->link;
    }
    if(ptr->data == key)
    {
        temp->data = data_value;
        temp->link = ptr->link;
        ptr->link = temp;
    }
    else
    {
        printf("\nValue %d not found\n",key);
    }
}
	void delete(int data_value)
	{

    
    printf("\nEnter data of the node:to be deteted ");
    scanf("%d", &data_value);
    if(header->data==data_value)
    {
    	header=header->link;
    }
    else
    {
    	temp=header;
    	while(temp->link->data != data_value)
    	{
    		temp=temp->link;
    	}
    	temp->link=temp->link->link;
    }


	}
//Function to display the contents of the linked list.
void display()
{
    printf("\nContents of the linked list are: \n");
    //Print the contents of the linked list starting from header
    ptr = header;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
        printf("%d ", ptr->data);
    }
    printf("%d ", ptr->data);
}