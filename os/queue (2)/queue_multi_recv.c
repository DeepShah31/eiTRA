#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <stdlib.h>
#define MSGSZ     128

typedef struct msgbuf {    //msg structure for char data
    long    mtype;
    char    mtext[MSGSZ];
} message_buf;

typedef struct msgbuf1 {   //msg structure for int data
    long    mtype1;
    int    mtext1;
} message_buf1;



main()
{
    int msqid;
    key_t key;
    message_buf  rbuf;
    message_buf1  rbuf1;
    int i;
    printf("Enter ");
    scanf("%d",&i);
    
    key = 133;

    if ((msqid = msgget(key, 0666)) < 0) {  //creating queue if not
         perror("msgget");
         exit(1);
      }

    if(i==1)  {
        if (msgrcv(msqid, &rbuf, MSGSZ, 2, 0) < 0) {  //receiving msg type 2 i.e char data
          perror("msgrcv");
          exit(1);
       }
       printf("%s\n", rbuf.mtext);   //print data
     }

   else  {

       if (msgrcv(msqid, &rbuf1, 12, 3, 0) < 0) {    //receiving msg type 3 i.e int data
          perror("msgrcv");
          exit(1);
       } 

      printf("%d\n", rbuf1.mtext1);   //print int data
   }
  
   exit(0);
}
