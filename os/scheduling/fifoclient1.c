#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include <sys/stat.h>
#define MSGSZ     128
typedef struct msgbuf {
         long    mtype;
         char    mtext[MSGSZ];
         } message_buf;

char file[][10]={"a.txt","b.txt","c.txt","d.txt","e.txt"};
//int n=0;
pthread_mutex_t lock;
int msqid;
         
          
void *send(void *name)
{
        if ((msqid = msgget(123,IPC_CREAT|0666)) < 0)
          {     printf("exit\n");
                exit(0);
          }
         size_t buf_length;
           message_buf sbuf;
        printf("n=%d\n",*(int *)name );
        pthread_mutex_lock(&lock);
         int n = *(int *)name ;
          sbuf.mtype = n;
          (void) strcpy(sbuf.mtext,file[n]);//file name copy into sbuf.mtext
          
          buf_length = strlen(sbuf.mtext) + 1 ;
        //  printf("%s\n",sbuf.mtext );
          if (msgsnd(msqid, &sbuf, buf_length, IPC_NOWAIT) < 0) 
          {
        exit(1);
      }
      else
        printf("send file to server=%s\n",file[n]);
      
        pthread_mutex_unlock(&lock);
}
int main(int argc, char const *argv[])
{
         pthread_t p1[5];
         int i=0;
         int a[5]={0,1,2,3,4};
        //param[1] = 456;
        
         for ( i = 0; i < 5; i++)
         {
                //printf("i=%d\n",i );

                pthread_create(&p1[i],NULL,send,&a[i]);
         
         }
         for (int j = 0; j < 5; j++)
         {
                pthread_join(p1[j],NULL);
         }
        return 0;
}