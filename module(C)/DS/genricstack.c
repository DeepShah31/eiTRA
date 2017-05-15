#include <stdio.h>
#include <stdlib.h>
int count=0;
struct linklist *head,*nodeptr;
typedef struct s
{
	int roll_no;
	char name;
}sdata;

typedef struct linklist
{
	struct s *data;
	struct linklist *next;	
}node;

void push()
{
	
	sdata *s1=malloc(sizeof(sdata));
	printf("enter roll_no:");
	scanf("%d",&s1->roll_no);
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
void pop()
{int c=0;
		nodeptr = head;
		if (head->next)
		{
			if(head->next!=NULL)
			{
				while (nodeptr->next->next)
				{
					c++;
					nodeptr = nodeptr->next;
				}	
			}
			
		}
		else
		{
			head->data=NULL;
			head->next=NULL;
			count=0;

		}
		//printf("c=%d\n",c);
		
			nodeptr->next =NULL;

}
void display()
{
	nodeptr = head;
	//printf("%d-",head->data->roll_no);
		while (nodeptr->next)
		{
			
			printf("%d->",nodeptr->data->roll_no);
			printf("%c\n",nodeptr->data->name);
			nodeptr = nodeptr->next;
		}
		//nodeptr->next =p;
		if(head->data)
		{
			printf("%d-",nodeptr->data->roll_no);
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
		printf("1.push element:\n");
		printf("2.pop element:\n");
		printf("3.display element:\n");
		int v;
		printf("enter num:\n");
		scanf("%d",&v);
		switch(v)
		{
			case 1:
			{
				push();				
				break;
			}
			case 2:
			{
				pop();				
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


