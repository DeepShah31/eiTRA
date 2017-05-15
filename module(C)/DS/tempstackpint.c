#include <stdio.h>
#include <stdlib.h>

struct  stack
{
	int a[100];
	int top;
}st;

void push(int stack *st,int num)
{
if (st.top<100)
		{
		st.top++;
		st.a[st.top]=num;
		}
		else
			printf("overlow\n");
}
int pop(int stack *st){
	int val;
if (st.top>0)
		{
			val=st.a[st.top];
			st.top--;
			return val;
		}
		else
			printf("underflow\n");
}
			printf("your data is:..\n");
		for (int i = st.top; i >=0; --i)
		{
			printf("%d\n",st.a[i]);
		}

int main(int argc, char const *argv[])
{
	struct stack ptr;
	int choice,val;
	st.top=-1;
	while(choice!=3)
{
	printf("enter 1 for push\n");
	printf("enter 2 or pop\n");
	printf("entre 3 for display\n");
	
	printf("enter choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
	{
		printf("enter data :\n");
		scanf(%d,&val);
		 push(&ptr, val);
		break;
	}
		case 2:
{
	element=pop(&ptr);
	printf("pop element is %d\n",element );
		
		break;
}
		case 3:
{
	
		break;
	}
	}
}
//return 0;
}