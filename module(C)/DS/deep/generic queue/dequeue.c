#include "gen_queue.h"
int dequeue(int count)
{
	//int c=0;
	if(count>0)
	{
		nodeptr = head;
		nodeptr=nodeptr->next;
		head=nodeptr;
		
			//nodeptr->next =NULL;
			count--;
			return count;
	}
	return 0;
}