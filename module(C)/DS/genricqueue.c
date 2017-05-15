#include <stdio.h>
#include <stdlib.h>
int count=0;
struct linklist *head,*nodeptr;
typedef struct s
{
	int id;
	char name;
}sdata;

typedef struct linklist
{
	struct s *data;
	struct linklist *next;	
}node;

void enqueue()
{
	
	sdata *s1=malloc(sizeof(sdata));
	printf("enter id:");
	scanf("%d",&s1->id);
	printf("enter name:");
	scanf("%s",&s1->name);

	node *p = NULL;

	p=malloc(sizeof(node));

	p->data=s1;
	p->next=NULL;
	//printf("%p\n",&p->value);
	if(count==0)
	{
		head=p;
		count++;
	}
	else
	{
		count++;
		nodeptr = head;
		while (nodeptr->next)
			nodeptr = nodeptr->next;
		nodeptr->next =p;
	}

}
void dequeue()
{
	if(head->next)
		head=head->next;
	else
	{
		head->data=NULL;
		count=0;
	}

}
void display()
{
	nodeptr = head;
	//printf("%d-",head->data->id);
		if(head->next)
		{
			while (nodeptr->next)
			{
				
				printf("%d-",nodeptr->data->id);
				printf("%c\n",nodeptr->data->name);
				nodeptr = nodeptr->next;
			}
		}

		//nodeptr->next =p;
		if(head->data)
		{
			printf("%d-",nodeptr->data->id);
			printf("%c\n",nodeptr->data->name);
		}
		else
		{
			printf("stack empty\n");
		}
}
int main(int argc, char const *argv[])
{
	int n=0;
	while(n!=4)
	{
		printf("1.enqueue element:\n");
		printf("2.dequeue element:\n");
		printf("3.display element:\n");
		int v;
		printf("enter num:\n");
		scanf("%d",&v);
		switch(v)
		{
			case 1:
			{
				enqueue();				
				break;
			}
			case 2:
			{
				dequeue();				
				break;
			}
			case 3:
			{
				display();
			}

		}
	}
	
	return 0;
}


