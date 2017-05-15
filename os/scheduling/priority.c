#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>
#include <unistd.h>
#include <sys/resource.h>
void *print_message_function1(void * p);
void *print_message_function2();
void *print_message_function3();
void *print_message_function4();

int count1 = 0;
int count2 = 0;
int times = 100000; // to see effect in cpu
pthread_mutex_t m;
 pthread_attr_t *p1;
int main() 
{
	pthread_t thread1, thread2,thread3,thread4;
	char *message1 = "Thread 1";
	char *message2 = "Thread 2";
	char *message3 = "Thread 3";
	char *message4 = "Thread 4";

	int iret1, iret2, iret3, iret4;

	int s1,s2,s3,s4;  
	cpu_set_t mask1;   // set of marco defined in CPU_SET
	cpu_set_t mask2;
	cpu_set_t mask3;
	cpu_set_t mask4;
    
	CPU_ZERO(&mask1);  // CPU_ZERO initializes all the bits in the mask to zero.
	CPU_ZERO(&mask2);
	CPU_ZERO(&mask3);
	CPU_ZERO(&mask4);

	CPU_SET(0, &mask1); // CPU_SET sets only the bit corresponding to cpu.
    CPU_SET(1, &mask2);
    CPU_SET(2, &mask3);
    CPU_SET(1, &mask4);

	//set attributes
	pthread_attr_t attr1, attr2, attr3,attr4;

	struct sched_param parm1, parm2, parm3, parm4;
	//struct timespec tp;
	//tp.tv_nsec = 1;

	pthread_attr_init(&attr1);          // thread attributes
	pthread_attr_init(&attr2);
    pthread_attr_init(&attr3);
    pthread_attr_init(&attr4);

    int ret1,ret2,ret3,ret4;
	ret1 = pthread_attr_getschedparam (&attr1, &parm1);
	ret2 = pthread_attr_getschedparam (&attr2, &parm2);
	ret3 = pthread_attr_getschedparam (&attr3, &parm3);
	ret4 = pthread_attr_getschedparam (&attr4, &parm4);
    //printf("ret1=%d\n",ret1);
    //p1=SCHED_FIFO;

    pthread_attr_setschedpolicy(&attr1, (int)SCHED_FIFO);
    pthread_attr_setschedpolicy(&attr2,  (int)SCHED_FIFO);
    pthread_attr_setschedpolicy(&attr3, (int)SCHED_FIFO);
    pthread_attr_setschedpolicy(&attr4,  (int)SCHED_FIFO);

    parm1.sched_priority=111;
    printf("att=%d\n", pthread_attr_setschedparam(&attr1,&parm1)); //non zero =error
    parm2.sched_priority=112;
    // pthread_attr_setschedparam(&attr2,&parm2);
    printf("att=%d\n", pthread_attr_setschedparam(&attr2,&parm2)); 
    parm3.sched_priority=113;
    // pthread_attr_setschedparam(&attr4,&parm3);
    printf("att=%d\n", pthread_attr_setschedparam(&attr3,&parm3)); 
    parm4.sched_priority=114;
    // pthread_attr_setschedparam(&attr4,&parm4);
    printf("att=%d\n", pthread_attr_setschedparam(&attr4,&parm4)); 
	//printf("priority=%d\n", parm1.sched_priority);
        // pthread_setschedprio(thread1,11);
        // pthread_setschedprio(thread2,12);
        // pthread_setschedprio(thread3,13);
        // pthread_setschedprio(thread4,14);

    int policy=SCHED_FIFO;
    
                           //Setting CPU affinity
    int i=1,j=2,k=3,l=4;
    
    s1 = pthread_attr_setaffinity_np(&attr1, sizeof(cpu_set_t), &mask1);
	s2 = pthread_attr_setaffinity_np(&attr2, sizeof(cpu_set_t), &mask2);
	s3 = pthread_attr_setaffinity_np(&attr3, sizeof(cpu_set_t), &mask3);
	s4= pthread_attr_setaffinity_np(&attr4, sizeof(cpu_set_t), &mask4);
	

	// int which1 = PRIO_PROCESS;
	// int which2 = PRIO_USER;
	// int which3 = PRIO_USER;
	// int which4= PRIO_USER;
	// setpriority(thread1,105);
	// setpriority(thread2,104);
	// setpriority(thread3,103);
	// // setpriority(thread4,102);
	// setpriority(which1,thread1,-20);
	// setpriority(which2,thread2,15);
	// setpriority(which3,thread3,10);
	// setpriority(which4,thread4,5);

	// printf("prio=%d\n",getpriority(which1,thread1));
	
	iret1 = pthread_create(&thread1, &attr1, (void*) print_message_function1,(void *) &i);   // creating thread with attributes
	iret2 = pthread_create(&thread2, &attr2, (void*) print_message_function1,(void *) &j);
	iret3 = pthread_create(&thread3, &attr3, (void*) print_message_function1,(void *) &k);
	iret4 = pthread_create(&thread4, &attr4, (void*) print_message_function1,(void *) &l);
	
	pthread_join(thread1, NULL);    // making thread joinable
	pthread_join(thread2, NULL);
   	pthread_join(thread3, NULL);
   	pthread_join(thread4, NULL);

	printf("Thread 1 returns: %d\n", iret1);
	printf("Thread 2 returns: %d\n", iret2);
	printf("Thread 3 returns: %d\n", iret3);
	printf("Thread 4 returns: %d\n", iret4);

	exit(0);
	//return EXIT_SUCCESS;
}

//===============================================
void *print_message_function1(void * p) {
	int pt= *(int *)p;
	// int pt=0;
	int m=0;
	//*(int *)i;
	//for(m=0;m<=5;m++)
	printf("thread %d %d\n",pt,m);
	while(1);
	return (void*) NULL;
}
