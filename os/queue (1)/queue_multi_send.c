#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>
#define MSGSZ     128

typedef struct msgbuf {    //message structure for char
         long    mtype;
         char    mtext[MSGSZ];
         } message_buf;

typedef struct msgbuf1 {   //message structure for int
         long    mtype1;
         int    mtext1;
         } message_buf1;

struct msqid_ds ds;    //declaring msgcntl structure 
struct msginfo info;   //declaring msginfo structure


int main()
{
   int msqid;
    int msgflg = IPC_CREAT | 0666;   //create queue 
    key_t key;
    message_buf sbuf;
    message_buf1 sbuf1;
    size_t buf_length;
    size_t buf_length1;

    key = 133;
    if ((msqid = msgget(key, msgflg )) < 0) {    //creating queue
        perror("msgget");
        exit(1);
    }
    else 
     (void) fprintf(stderr,"msgget: msgget succeeded: msqid = %d\n", msqid);
  
    
    sbuf.mtype = 2;        //send message type 2  
    (void) strcpy(sbuf.mtext, "Hello World");   //sending char data
    
    buf_length = strlen(sbuf.mtext) + 1 ;
    printf("size of char = %zu\n",buf_length);   
     
    sbuf1.mtype1 = 3;   //send message type 3
    sbuf1.mtext1=3;     //sending int data 
  
    buf_length1 = (sizeof(sbuf1.mtext1));
    printf("size of int = %zu\n",buf_length1);



    (msgctl(msqid,IPC_STAT,&ds));  //assinging data to ds structure
     printf("\n\nBefore sending data\n");
      printf("\nmsqid=%d,\nTime of last msg send =%ld,\nTime of last msg received =%ld,\nTime of last change =%ld,\nCurrent no of bytes=%d,\nno. of msg =%d,\nmax allowed in qeue =%d,\nmsgsnd pid =%d,\nmsgrev pid =%d\n",msqid,ds.msg_stime,ds.msg_rtime,ds.msg_ctime,(int)ds.msg_cbytes,(int)ds.msg_qnum,(int)ds.msg_qbytes,(int)ds.msg_lspid,(int)ds.msg_lrpid);


     printf("Enter permission\n");
     scanf("%ho",&ds.msg_perm.mode);  //scan the mode in ipc_perm
     msgctl(msqid,IPC_SET,&ds);
     printf("cuid %d,  uid %d, cgid %d gid %d mode %ho",ds.msg_perm.cuid,ds.msg_perm.uid,ds.msg_perm.cgid,ds.msg_perm.gid,ds.msg_perm.mode);  //print ipc_perm
   
  
     printf("\n\nmsgpool %d,  msgmap %d,  msgmax %d,  msgmnb %d, msgmni %d, msgssz %d, msgtql %d, msgseg %hu \n",info.msgpool,info.msgmap,info.msgmax,info.msgmnb,info.msgmni,info.msgssz,info.msgtql,info.msgseg);




    if (msgsnd(msqid, &sbuf, buf_length, IPC_NOWAIT) < 0) {     //sending char data
       printf ("%d, %ld, %s, %zu\n", msqid, sbuf.mtype, sbuf.mtext, buf_length);
        perror("msgsnd");
        exit(1);
    }
   else 
      printf("\nMessage: \"%s\" Sent\n", sbuf.mtext);
      
   if (msgsnd(msqid, &sbuf1, buf_length1, IPC_NOWAIT) < 0) {   //sending int data

       printf ("%d, %ld, %d, %zu\n", msqid, sbuf1.mtype1, sbuf1.mtext1, buf_length1);
        perror("msgsnd");
        exit(1);
    }
   else
      printf("Message: \"%d\" Sent\n", sbuf1.mtext1);




   (msgctl(msqid,IPC_STAT,&ds));   //assigning data to ds structure

     printf("\n\nafter sending data\n");
    printf("\nmsqid=%d,\nTime of last msg send =%ld,\nTime of last msg received =%ld,\nTime of last change =%ld,\nCurrent no of bytes=%d,\nno. of msg =%d,\nmax allowed in qeue =%d,\nmsgsnd pid =%d,\nmsgrev pid =%d\n",msqid,ds.msg_stime,ds.msg_rtime,ds.msg_ctime,(int)ds.msg_cbytes,(int)ds.msg_qnum,(int)ds.msg_qbytes,(int)ds.msg_lspid,(int)ds.msg_lrpid);


     printf("cuid %d,  uid %d, cgid %d gid %d mode= %ho\n",ds.msg_perm.cuid,ds.msg_perm.uid,ds.msg_perm.cgid,ds.msg_perm.gid,ds.msg_perm.mode);
    

     printf("\n\nmsgpool %d,  msgmap %d,  msgmax %d,  msgmnb %d, msgmni %d, msgssz %d, msgtql %d, msgseg %hu \n",info.msgpool,info.msgmap,info.msgmax,info.msgmnb,info.msgmni,info.msgssz,info.msgtql,info.msgseg);



    exit(0);
}
