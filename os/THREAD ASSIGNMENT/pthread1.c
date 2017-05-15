#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_message_function (void *ptr);

main ()
{
  pthread_t thread1, thread2;
  char *message1 = "I am Thread 1";
  char *message2 = "I am Thread 2";
  int iret1=5, iret2=10;

  /* Create independent threads each of which will execute function */

  iret1 = pthread_create (&thread1, NULL, print_message_function,
			  (void *) message1);//NULL attribute 
  iret2 = pthread_create (&thread2, NULL, print_message_function,
		    (void *) message2);
	//int pthread_getattr_np(pthread_t thread1, pthread_attr_t *attr);
  /* Wait till threads are complete before main continues. Unless we  */
  /* wait we run the risk of executing an exit which will terminate   */
  /* the process and all threads before the threads have completed.   */

/* */
pthread_join (thread1, NULL);
pthread_join (thread2, NULL);
/* */
  printf ("Thread 1 returns: %d\n", iret1);
  printf ("Thread 2 returns: %d\n", iret2);
 // while(1);
  //exit (0);
}

void *print_message_function (void *ptr){
  char *message;
  message = (char *) ptr;
  printf ("%s \n", message);

 while(1);
}
// By Default system and joinable
//pthread_join is called from another thread (usually the thread that created it) to wait for a thread to terminate and obtain its return value
//pthread_detach can be called from either the thread itself or another thread, and indicates that you don't want the thread's return value or the ability to wait for it to finish.