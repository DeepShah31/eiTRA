#include <stdio.h>
#include <stdlib.h>

#define FIFO_FILE "MYFIFO"

int main(int argc, char *argv[])
{
        FILE *fp;
        char str[100];
        while(1)
        {
        if ( argc != 2 )
         {
                printf("USAGE: fifoclient [string]\n");
                exit(1);
        }
        //fp=fopen("1.txt",)
        if((fp = fopen(FIFO_FILE, "w")) == NULL) {
                perror("fopen");
                exit(1);
        }
        scanf("%s",str);
        fputs(str, fp);
        fclose(fp);
     
}
        return 0;  
}
