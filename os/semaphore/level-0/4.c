#include <stdio.h>
#include <semaphore.h>
#define MAX 52
int a=0;
void *seller(void *arg);
pthread_mutex_t m;

int main(int argc, char const *argv[])
{
	int i;
	 pthread_t Readers_thr[60];

  for(i=1;i<53;i++)   {
      pthread_create(&Readers_thr[i],NULL,seller,(void *)i);
          
   }

  for(i=0;i<5;i++)   {
      pthread_join(Readers_thr[i],NULL);
   }
  
	return 0;
}


void *seller(void *arg)
{
	int tmp=(int*)arg;
	pthread_mutex_lock(&m);
	if(a>=5)
		a=1;
	else
		a++;
	printf("seller=%d ticket=%d\n",a,tmp);
	pthread_mutex_unlock(&m);
	pthread_exit(0);
}

