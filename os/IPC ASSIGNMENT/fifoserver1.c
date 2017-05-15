#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <linux/stat.h>

#define FIFO_FILE "MYFIFO"

int main(void)
{
        FILE *fp,*fp2;
        int i;
        char readbuf[80];
        mkfifo(FIFO_FILE, S_IFIFO|0666);

        while(1)
        {       printf("hello at server\n");
                fp = fopen(FIFO_FILE, "r");//read the content of FIFO file that we passed as argument
                fgets(readbuf, 80, fp);
                if(strlen(readbuf)==0)
                printf("no data received\n");
                else
                {
                        printf("Received string: %s\n", readbuf);
                        fp2 = fopen(readbuf,"r");//content readbuffer pass to fp2(onother file pointer)
                       while(fgets(readbuf,10,fp2))
                                {
                                printf("%s",readbuf);//just print readbuf                           
                                }
                        fclose(fp);
                }
        }

        return(0);
}
