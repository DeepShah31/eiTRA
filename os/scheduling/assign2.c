#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>

void *print_message_function(void *ptr);


int main() 
{
  pthread_t thread1, thread2;
  char *message1 = "Thread 1";
  char *message2 = "Thread 2";

  int iret1, iret2;

                          
  int s1,s2,num_CPUs = 0;  // only run on 1 core
  cpu_set_t mask1;    // set of marco defined in CPU_SET
  cpu_set_t mask2;
    
    int num_CPUs1=2;
  /* CPU_ZERO initializes all the bits in the mask to zero. */
  CPU_ZERO(&mask1);
  CPU_ZERO(&mask2);
  /* CPU_SET sets only the bit corresponding to cpu. */
  CPU_SET(num_CPUs, &mask1);
    CPU_SET(num_CPUs1, &mask2);
  //set attributes
  pthread_attr_t attr1,attr2;
  struct sched_param parm1, parm2;
  pthread_attr_init(&attr1);
  pthread_attr_init(&attr2);
    
  s1 = pthread_attr_setaffinity_np(&attr1, sizeof(cpu_set_t), &mask1);
  s2 = pthread_attr_setaffinity_np(&attr2, sizeof(cpu_set_t), &mask2);
  
  iret1 = pthread_create(&thread1, &attr1, (void*) print_message_function,(void*) message1);
  iret2 = pthread_create(&thread2, &attr2, (void*) print_message_function,(void*) message2);
  
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  printf("Thread 1 returns: %d\n", iret1);
  printf("Thread 2 returns: %d\n", iret2);
  exit(0);
  //return EXIT_SUCCESS;
}

//===============================================
void *print_message_function(void *ptr) {
 char *message;
  message = (char *) ptr;
  printf ("%s \n", message);
 while(1);
}

