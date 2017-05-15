#include "gen_st.h"

void push(void *st,int count)
{
	node *p = NULL;
	p=malloc(sizeof(node));
	//printf("%p\n",st);
	p->data=st;
	p->next=NULL;

	if(count==0)
	{
		head=p;
	}
	else
	{
		nodeptr = head;
		while (nodeptr->next)
			nodeptr = nodeptr->next;
		nodeptr->next =p;
	}

}