#include <stdio.h>
#include <stdlib.h>

struct  stack
{
	int a[100];
	int top;
}st;


int main(int argc, char const *argv[])
{
	struct stack st;
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
		if (st.top<100)
		{
		printf("enter element you want to insert\n");
		scanf("%d",&val);
		st.top++;
		st.a[st.top]=val;
		}
		else
			printf("overlow\n");
		break;
	}
		case 2:
{
		if (st.top>0)
		{
			printf("enter element you want to delete\n");
			scanf("%d",&val);
			st.top--;
			st.a[st.top]=val;
			printf("%d\n",val);
		}
		else
			printf("underflow\n");
		break;
}
		case 3:
{
		printf("your data is:..\n");
		for (int i = st.top; i >=0; --i)
		{
			printf("%d\n",st.a[i]);
		}
		break;
	}
	}
}
//return 0;
}