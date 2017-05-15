#include <stdlib.h>

struct linklist *head,*nodeptr;
typedef struct linklist
{
	struct s *data;
	struct linklist *next;	
}node;

void*display();
void push(void *st,int count);
int pop(int count);
