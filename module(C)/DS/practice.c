#include<stdio.h>
#define MAXSIZE 100
struct s
{
	int array[MAXSIZE];
	int top;
}stack;

int main(int argc, char const *argv[])
{
	struct s stack;
	int choice,data;
	stack.top=-1;
	while(choice!=3)
	{
	printf("enetr 1 for push\n");
	printf("enetr 2 for pop\n");
	printf("enetr 3 for display\n");
	printf("enter choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			if (stack.top<MAXSIZE)
		{
			printf("enetr data to insert\n");
			scanf("%d",&data);
			stack.top++;
			stack.array[stack.top]=data;

		}
		else
			printf("stack overflow\n");
		break;
		}
		case 2:
		{
			if (stack.top>0)
		{
			printf("enetr data to pop\n");
			scanf("%d",&data);
			stack.top--;
			stack.array[stack.top]=data;
			printf("%d\n",data);

		}
		else
			printf("stack empty\n");
		break;
		}
		case 3:
		{
			printf("your data is\n");
			for (int i = stack.top; i >=0; --i)
			{
				printf("%d\n",stack.array[i]);
			}
		break;
		}
		}
	}
}