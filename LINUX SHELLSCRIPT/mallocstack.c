#include<stdio.h>
#include<stdlib.h>
		
struct stack
{
	char name[20];
	int id;
};
int main(int argc, char const *argv[])
{

	struct stack st;
	printf("enetr size\n");
	scanf("%d",&n);
	void *p=(int *)malloc(n*sizeof(st));
	printf("%d\n");
	void push(struct stack *st, int num)
	 {
   if (st->top == size - 1)
    {
      printf("\nStack overflow(i.e., stack full).");
      return;
   }
   st->top++;
   st->arr[st->top] = num;
}










+++++

}