#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
int fd1,fd2,fd3;
fd1=open("read_write.txt",O_RDONLY);
printf("%d \n",fd1);
fd2=open("read_write.txt",O_WRONLY);
printf("%d \n",fd2);
fd3=open("read_write.txt",O_RDONLY);
printf("%d \n",fd3);
close(fd1);
close(fd2);
close(fd3);
return 0;
}