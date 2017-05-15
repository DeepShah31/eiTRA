#include <stdlib.h>

struct linklist *head,*nodeptr;
typedef struct linklist
{
	struct s *data;
	struct linklist *next;	
}node;

void *display(int count);
void enqueue(void *st,int count);
int dequeue(int count);