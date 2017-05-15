#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <stdio.h>
#include <stdlib.h>
//create user defined semun for initializing the semaphores

//default random consumer wtriter priority

int queue[10];
int top=0;
void enqueue(int);
int dequeue();

int a=0;
void *consumer(void *arg)
{
  printf("consumer start\n");
  int semid;
  semid = (int)arg;

  //in order to perform the operations on semaphore
  // first need to define the sembuf object
  struct sembuf op1,op2;

  //operation for 0th semaphore
  op1.sem_num = 0; //signifies 0th semaphore
  op1.sem_op = -1; //reduce the semaphore count to lock
  op1.sem_flg = 0; //wait till we get lock on semaphore

  //operation for 1th semaphore
  op2.sem_num = 1; //signifies 0th semaphore
  op2.sem_op = -1; //reduce the semaphore count to lock
  op2.sem_flg = 0; //wait till we get lock on semaphore

    
    //printf("a=%d\n",a);
  printf("dequeue=%d\n", dequeue());

  //release the 0th semaphore
  op1.sem_num = 0; //signifies 0th semaphore
  op1.sem_op = 1; //reduce the semaphore count to lock
  op1.sem_flg = 0; //wait till we get lock on semaphore

  
  //release the 1th semaphore
  op2.sem_num = 1; //signifies 0th semaphore
  op2.sem_op = 1; //reduce the semaphore count to lock
  op2.sem_flg = 0; //wait till we get lock on semaphore

 
    printf("consumer end\n");
}

void *producer(void *arg)
{
  printf("producer start\n");
  int semid;
  semid = (int)arg;

  //in order to perform the operations on semaphore
  // first need to define the sembuf object
  struct sembuf op1,op2;

  //operation for 0th semaphore
  op1.sem_num = 0; //signifies 0th semaphore
  op1.sem_op = -1; //reduce the semaphore count to lock
  op1.sem_flg = 0; //wait till we get lock on semaphore

  //operation for 1th semaphore
  op2.sem_num = 1; //signifies 0th semaphore
  op2.sem_op = -1; //reduce the semaphore count to lock
  op2.sem_flg = 0; //wait till we get lock on semaphore

    //a++;
    enqueue(1);
  //release 0th semaphore

  op1.sem_num = 0; //signifies 0th semaphore
  op1.sem_op = 1; //reduce the semaphore count to lock
  op1.sem_flg = 0; //wait till we get lock on semaphore

  
  //release the 1th semaphore
  op2.sem_num = 1; //signifies 0th semaphore
  op2.sem_op = 1; //reduce the semaphore count to lock
  op2.sem_flg = 0; //wait till we get lock on semaphore

 
    printf("producer end\n");
}

void enqueue(int data)
{
  if (top>=10)
  {
    printf("queue full\n");
  }
  else
  {
    queue[top]=data;
    top++;
  }
}
int dequeue()
{
  return queue[--top];
}

int main()
{
  pthread_t tid1,tid2,tid3;
  int semid;

  //create user defined semun for initializing the semaphores
  // enqueue(1);
  // printf("dequeue=%d\n", dequeue());
  typedef union semun
  {
    int val;
    struct semid_ds *buf;
    ushort * array;
  }semun_t;

  semun_t arg;
  semun_t arg1;
  semun_t arg2;

  //creating semaphore object with two semaphore in a set
  //viz 0th & 1th semaphore
  semid = semget(IPC_PRIVATE,2,0666|IPC_CREAT);
  if(semid<0)
    {
      perror("semget failed Reason:");
      exit(-1);
    }

  //initialize 0th semaphore in the set to value 1
  arg.val = 1;

  if ( semctl(semid,0,SETVAL,arg)<0 )
    {
      perror("semctl failure Reason:");
      exit(-1);
    }
  //initialize 1th semaphore in the set to value 1
  arg1.val = 1;
  
  if( semctl(semid,1,SETVAL,arg1)<0 )
    {
      perror("semctl failure Reason: ");
      exit(-1);
    }
      arg2.val=1;
      if( semctl(semid,1,SETVAL,arg2)<0 )
    {
      perror("semctl failure Reason: ");
      exit(-1);
    }
  //create two threads to work on these semaphores
  if(pthread_create(&tid1, NULL,consumer, semid))
    {
      printf("\n ERROR creating thread 1");
      exit(1);
    }
  if(pthread_create(&tid2, NULL,producer, semid) )
    {
      printf("\n ERROR creating thread 2");
      exit(1);
    }
    if(pthread_create(&tid3, NULL,consumer, semid) )
    {
      printf("\n ERROR creating thread 2");
      exit(1);
    }
  //waiting on these threads to complete
  pthread_join(tid1, NULL);
  pthread_join(tid2, NULL);
  pthread_join(tid3, NULL);

  //once done clear the semaphore set
  if (semctl(semid, 1, IPC_RMID ) == -1 )
    {
      perror("semctl failure while clearing Reason:");
      exit(-1);
    }
  //exit the main threads
  pthread_exit(NULL);
  return 0;
}
