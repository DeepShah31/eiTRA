#include "gen_st.h"
void*display()
{
	return head;
}
int pop(int count)
{
	//int c=0;
	if(count>0)
	{
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
			//count=0;

		}
		//printf("c=%d\n",c);
		
			nodeptr->next =NULL;
			count--;

	}
	return count;
}
