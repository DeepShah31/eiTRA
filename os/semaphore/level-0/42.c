#include <stdio.h>
#include <semaphore.h>
#define MAX 52
int a=0;
void *seller(void *arg);
sem_t sm;

int main(int argc, char const *argv[])
{
	int i;

	pthread_t Readers_thr[MAX];
	sem_init(&sm,0,1);

  for(i=0;i<MAX;i++)   {
      pthread_create(&Readers_thr[i],NULL,seller,(void *)i);
          
   }

  for(i=0;i<5;i++)   {
      pthread_join(Readers_thr[i],NULL);
   }
  sem_destroy(&sm);
  
	return 0;
}


void *seller(void *arg)
{
	int tmp=(int*)arg;
	sem_wait(&sm);
	if(a>=5)
		a=1;
	else
		a++;
	printf("seller=%d ticket=%d\n",a,tmp);
	sem_post(&sm);
	pthread_exit(0);
}

