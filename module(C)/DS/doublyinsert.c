#include <stdio.h>
#include <stdlib.h>

//Create a basic structure for NODE from which new nodes can be created.
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

//Initialize 3 pointers as globals so that they do not need to be passed in functions.
struct node *header, *temp1,*temp2, *temp;
int count=0;
//Prototypes for various user defined functions.
void insert_front();
void insert_end();
void insert_any();
void display();
void delete();
void ReversePrint();

void main()
{
    int choice;
    int cont = 1;

    //Allocate memory for header node.
    header = (struct node *) malloc(sizeof(struct node));

    //Set the content of header node
    header->data=NULL;
    header->next = NULL;
    header->prev = NULL;

    while(cont == 1)
    {
        //Display menu to the user
        printf("\n1. Insert at front\n");
        printf("\n2. Insert at end\n");
        printf("\n3. Insert at any position\n");
        printf("\n4. delete linked list\n");
        printf("\n5. display linked list\n");
        printf("\n 6.reverse print\n");
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
                delete_first();
                break;
            case 5: 
                delete_any();
                break;
            case 6:
                display();
                break;
            case 7:
                ReversePrint();
                break;
        }
    }
}

//Function to insert a node at the front of a single linked list.
void insert_front()
{
    int data;

    printf("\nEnter data of the node: ");
    scanf("%d", &data);

    temp = (struct node *) malloc(sizeof(struct node));
    if (header==NULL)
    {
    	header=temp;
    }
    header->prev=temp;
    temp->next=header;
    header=temp;
    printf("%d",header->data=data);
}
void insert_end()
{
    int data;

    printf("\nEnter data of the node: ");
    scanf("%d", &data);

    temp = (struct node *) malloc(sizeof(struct node));
    if (header==NULL)
    {
    	header=temp;
    }
    temp1=header;
    while(temp1->next != NULL)
    {
    	temp1=temp1->next;
    }
    temp->next=NULL;
        temp->data=data;
        temp->prev=temp1;
        temp1->next=temp;
    printf("%d\n",temp->data);
}
void insert_any()
{
    int val,data;
    temp = (struct node *) malloc(sizeof(struct node));
    printf("enetr data\n");
    scanf("%d",&temp->data);
    temp1=header;
    printf("enter value after which you insert a node\n");
    scanf("%d",&val);
    while(temp1->data != val)
    {
        temp1=temp1->next;
    }
    temp2=temp1->next;
    temp->next=temp2;
    temp->prev=temp1;
    temp1->next=temp;
    temp2->prev=temp;

 printf("%d",temp->data);     
}
void delete_first()
{
    temp=header;
    header=header->next;
    temp->next=NULL;
    header->prev=NULL;
    free(temp);
    //printf("%d",header->data=data);
}
void delete_any()
{
    printf(“Enter the value of node you wish to delete”);
    scanf(“%d”,&val);
    temp = header;
while(temp->data != val)
      temp = temp -> next;
      t1= temp->prev;
      t2=temp->next;
      t1->next = t2;
      t2->prev = t1;
      temp->prev= NULL;
      temp->next = NULL;
      free(temp);
}
void display()
{
    struct node* temp = header;
	printf("Forward: ");
	while(temp->next != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("%d ",temp->data);
}

void ReversePrint() {
	struct node* temp = header;
	if(temp->next == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}                                                                                                                          
	// Traversing backward using prev pointer
	printf("Reverse: ");
	while(temp->prev != NULL) {
		temp = temp->prev;
		printf("%d ",temp->data);
	}
		printf("%d ",temp->data);
}
                      