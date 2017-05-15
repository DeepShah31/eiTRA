#include <stdio.h>

#include "gen_st.h"
int count=0;
typedef struct s
{
	int id;
	char name;
}sdata;

typedef struct linklist1
{
	struct s *data;
	struct linklist1 *next;	
}node1;

void display1()
{
	node1 *head=display();
	node1 *nodeptr;
	nodeptr = head;
	//printf("%d-",head->data->id);
		while (nodeptr->next)
		{
			
			printf("%d-",nodeptr->data->id);
			printf("%c\n",nodeptr->data->name);
			nodeptr = nodeptr->next;
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
	sdata *s1;
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
				s1=(sdata*)malloc(sizeof(sdata));
				printf("enter id:");
				scanf("%d",&s1->id);
				printf("enter name:");
				scanf("%s",&s1->name);
				printf("%p\n",&s1);
				push(s1,count);
				//free(s1);				
				//s1=NULL;
				count++;
				break;
			}
			case 2:
			{

				count=pop(count);				

				break;
			}
			case 3:
			{
				display1();
			}

		}
	}
	
	return 0;
}
