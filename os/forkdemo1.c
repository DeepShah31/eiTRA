#include <stdio.h>
int main(){
int pid;
pid=fork();
if(pid!=0){
printf("current prosess is is %d\n child process id is %d\n parent prosess is is %d \n",getpid(),pid,getppid());
}
return 0;
} //End of program