#include <stdio.h>
#include <stdlib.h>

#define FIFO_FILE   "MYFIFO"

int main(int argc, char *argv[])
{
        FILE *fp;
        if ( argc != 4 ) {
                printf("USAGE: fifoclient [string]\n");
                exit(1);
        }

        if((fp = fopen(FIFO_FILE, "w")) == NULL) {
                perror("fopen");
                exit(1);
        }

        fputs(argv[1], fp);
        fputs(argv[2], fp);
        fputs(argv[3], fp);
        fclose(fp);
        return(0);
}