#include <pthread.h>
#include <stdio.h>

void *function(void *data)
{
    while (1)
    {
        printf(" detached thread...\n");
        sleep(5);
    }
    pthread_exit(NULL);//terminate
}

int main()
{
    pthread_t thread;
    if (!pthread_create(&thread, NULL, function, NULL))
    {
        if ( ! pthread_detach(thread) )
            printf("Thread detached successfully !!!\n");
    }

    sleep(5);
    printf("hello!!");
    return 0;
}