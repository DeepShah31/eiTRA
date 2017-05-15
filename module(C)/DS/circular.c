#include <stdio.h>
#include <stdlib.h>
int count=0;

struct list *head,*nodeptr;
typedef struct list
{
	int value;
	struct list *next;
}llist;

void appendnode(int data)
{
	 llist *node = NULL;

	 node=malloc(sizeof(llist));

	node->value=data;
	node->next=head;
	//printf("%p\n",&p->value);
	if(count==0)
	{
		head=node;
		count++;
	}
	else
	{
		nodeptr = head;
		int i=count;
		while (i-1)
		{
			nodeptr = nodeptr->next;
			i--;
		}
		nodeptr->next =node;
		count++;
	}

	//printf("%d\n", head->value);
}
void insert_first(int data)
{
	llist *node = NULL;
	 node=malloc(sizeof(llist));
	node->value=data;
	node->next=head;
	head=node;
	int i=count;
		while (i)
		{
			printf("%d\n",nodeptr->value);
			nodeptr = nodeptr->next;
			i--;
		}
		nodeptr->next=head;
		count++;
}
void insert(int locate,int v)
{
	llist *node = NULL;
	 node=malloc(sizeof(llist));
	node->value=v;
	node->next=NULL;

	nodeptr = head;
	int i=count;
		while (i-1)
				{
					i--;
					if((nodeptr->next->value)!=locate)
					{
						printf("%d ",nodeptr->value);
						nodeptr = nodeptr->next;
					}
					else
					{
						printf("%d ",nodeptr->value);
						break;
					}
				}
				nodeptr=nodeptr->next;
				node->next=nodeptr->next;
			nodeptr->next=node;
			count++;

}
void display()
{

if(count>0){
	nodeptr = head;
	int i=count;
		while (i-1)
		{
			printf("%d\n",nodeptr->value);
			nodeptr = nodeptr->next;
			i--;
		}
		printf("%d\n",nodeptr->value);
	}
	else
	{
		printf("list empty\n");
	}
}
void delete(int d)
{
		nodeptr = head;
		
		if(d==head->value)
		{
			nodeptr=nodeptr->next;
			head=nodeptr;
			int i=count;
			while (i-2)
			{
				printf("%d\n",nodeptr->value);
				nodeptr = nodeptr->next;
				i--;
			}
			nodeptr->next=head;
			count--;
		}
		else
		{
			while (nodeptr->next!=head)
				{
					if((nodeptr->next->value)!=d)
					{
						printf("%d ",nodeptr->value);
						nodeptr = nodeptr->next;
					}
					else
					{
						printf("%d ",nodeptr->value);
						count--;
						break;
					}
				}
		nodeptr->next=nodeptr->next->next;	

		
	}
			
}
int main(int argc, char const *argv[])
{
	int n=0;
	while(n!=6)
   {
      printf("\n\n1.appendnode element\n");
      printf("2.insert element\n");
      printf("3.insert element at first\n");
      printf("4.delete element\n");
      printf("5.display element\n");
      printf("6.exit\n");
      printf("enter your choice:");
      scanf("%d",&n);

      switch(n)
      {
         case 1:
            {
               		int v;
                  printf("enter value to push in stack-0:");
                  scanf("%d",&v);
                  appendnode(v);

                              break;
            }

         case 2:
            {
					int v,locate;
                  printf("add element after this element:");
                  scanf("%d",&locate);
					printf("element value:");
                  scanf("%d",&v);
                  insert(locate,v);

            	                
               break;
            }
            case 3:
            {
					int v;
                  printf("enter element:");
                  scanf("%d",&v);
            	  insert_first(v);                  
               break;
            }
         case 4:
            {
					int v;
                  printf("delete element:");
                  scanf("%d",&v);
            	  delete(v);                  
               break;
            }
         case 5:
            {
               display();
               break;
            }


      }
   }
    
	return 0;
}