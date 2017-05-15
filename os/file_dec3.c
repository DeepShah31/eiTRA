#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
int fd1,fd2,fd3;
fd1=open("read_write.txt",O_RDONLY);
printf("%d \n",fd1);
close(fd1);
fd2=open("read_write.txt",O_RDONLY);
printf("%d \n",fd2);
close(fd2);
fd3=open("read_write.txt",O_WRONLY);
printf("%d \n",fd3);
close(fd3);
return 0;
}
/*
In simple words, when you open a file, the operating system creates an entry to represent that file and 
store the information about that opened file.
So if there are 100 files opened in your OS then there will be 100 entries in OS (somewhere in kernel). 
These entries are represented by integers like (...100, 101, 102....). 
This entry number is the file descriptor. So it is just an integer number that uniquely represents an opened file in operating system.
 If your process opens 10 files then your Process table will have 10 entries for file descriptors.
Similarly when you open a network socket, it is also represented by an integer and it is called Socket Descriptor. I hope you understand.
*/