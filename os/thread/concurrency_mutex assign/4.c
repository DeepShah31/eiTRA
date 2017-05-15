#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 2

void *insert1();
void *insert2();

pthread_mutex_t mut1;    // mutex 
pthread_mutex_t mut2;

int A = 0;            // global variables
int B = 0;

main( int argc, char *argv[] ) 
{
  int iret1,iret2;
  pthread_t thread1, thread2;
  iret1 = pthread_create (&thread1, NULL, insert1,NULL);      // create thread 1
  iret2 = pthread_create (&thread2, NULL, insert2,NULL);      // create thread 2
  pthread_join(thread1,NULL);                                 // joinable 
  pthread_join(thread2,NULL);
  printf("\nmain() reporting that all threads have terminated\n");
} 

 
void *insert1()             // thread 1
{ 
  printf("Thread 1 A\n");
  pthread_mutex_lock(&mut1);   // mutex lock to A
  A=1;
  printf("A= %d\n",A);
  pthread_mutex_lock(&mut2);   // mutex lock to B//wait (deadlock)
  printf("Thread 1 B\n");
  B=1;
  printf("B= %d\n",B);
  pthread_mutex_unlock(&mut2);  // unlock to B
  pthread_mutex_unlock(&mut1);  // unlock to A
  printf("A=%d\nB=%d\n",A,B);
}    

void *insert2()               // thread 2
{ 
  printf("Thread 2 B\n");    
  pthread_mutex_lock(&mut2);    // mutex lock to B
  B=2; 
    printf("B= %d\n",B);
  pthread_mutex_lock(&mut1);    // mutex lock to A//wait(deadlock)
  printf("Thread 2 A\n");
  A=2;
    printf("A= %d\n",A);
  pthread_mutex_unlock(&mut1);   // mutex unlock to A
  pthread_mutex_unlock(&mut2);   // mutex unlock to B
  printf("A=%d\nB=%d\n",A,B);
}    
