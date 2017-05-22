#include <stdio.h>
#include<pthread.h>
#include<stdlib.h>
#define MAX 50//max size of queue
#define NUM_THREADS 2

int queue_array[MAX];
int front = 0;
char *buffer_queue;
 
pthread_mutex_t m;
pthread_t tid[NUM_THREADS];
pthread_t tid3; 

void * insert();
void * delete();

int main()
{
   int tid3,i;
   buffer_queue=(int *)malloc(sizeof(int)* MAX);
   pthread_create(&tid3,NULL,insert,NULL); //thread1 for produce
   for (i=0; i<NUM_THREADS; i++)          // thread2,3  for consume
     {
        pthread_create(&tid[i], NULL, delete, NULL); 
     } 
  for ( i = 0; i < NUM_THREADS; i++)       // joinable threads
       pthread_join(tid[i], NULL);
  pthread_join(tid3, NULL);
	    return 0;
}

void *insert()
{
    while(1)
  {
    	if(front == MAX)// if the value of front == maximum(50)
	{
		pthread_exit(0);//terminate the producer thread
	}
	else
	{
   // pthread_mutex_lock(&m);
	queue_array[front++] = '@';//increment the front and store in array
	printf("producer:%d\n",front);
  //pthread_mutex_unlock(&m);
	}
    }
} 

void *delete()
{
   while(1)
   {
	//pthread_mutex_lock(&m);
        if (front == - 1)
    	{
        printf("Queue Underflow \n");
	return;	
    	}
   	else
    	{
        printf("consumer: %d\n",front--);
    	}
   	//pthread_mutex_unlock(&m);
   }
} 