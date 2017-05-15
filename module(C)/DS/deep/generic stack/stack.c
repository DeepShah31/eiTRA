int count=0;
struct linklist *head,*nodeptr;
typedef struct linklist
{
	struct s *data;
	struct linklist *next;	
}node;

void *display()
{
	return head;
}
void push(void *st)
{
	node *p = NULL;
	p=malloc(sizeof(node));
	p->data=st;
	p->next=NULL;

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
{
	//int c=0;
		nodeptr = head;
		if (head->next)
		{
			if(head->next!=NULL)
			{
				while (nodeptr->next->next)
				{
					//c++;
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