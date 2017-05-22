#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

struct shmid_ds ds;

int main()
{
  int res,shmid;
  char *buff,*s,i;
  key_t key = 125;

  if((shmid=shmget(key,128,IPC_CREAT | 0666))==-1)
   {
     printf("Fails to get shared memory");
     exit(0);
   }

  printf("shred memory ID = %d\n",shmid);
  buff=shmat(shmid,0,0);
  printf("%p is assigned\n",buff);
 
  s=buff;
  for(i='a';i<='z';i++)
   {
     *s=i;
     s++;
   }
  s='\0';
  printf("%s read from shared memory\n",buff);

   while(*buff!='*')  //waiting
   sleep(1);


    (shmctl(shmid,IPC_STAT,&ds));  //assinging data to ds structure

      printf("\nshmid=%d,\nsize of segment = %ld,\nLast attach time=%ld,\nLast dettach time =%ld,\nLast change time=%ld,\nPID of creator =%d,\nPID of last shmat()/shmdt() =%d,\nNo. of current attaches%d",shmid,ds.shm_segsz,ds.shm_atime,ds.shm_dtime,ds.shm_ctime,ds.shm_cpid,ds.shm_lpid,(int)ds.shm_nattch);


  res=shmdt(buff);
  printf("\nshared memory Detached with %d \n",res);
  return 0;
}
