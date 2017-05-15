#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *temp,*header;
void delete();

int main(int argc, char const *argv[])
{
	int choice,value;
	header=(struct node *)malloc(sizeof(struct node));
	header->info=NULL;
	header->link=NULL;
	while(1)
	{
		printf("enter 1 for delete");
		printf("enetr choice \n");
		scanf("%d",&choice);
		printf("enetr data that want to delete\n");
		scanf("%d",&value)
		switch(choice)
		{
			case 1:
			void delete(int value)
			{
			while(temp->next->info != value)
			{
				
			}


			}
		}
	}
	

	return 0;
}