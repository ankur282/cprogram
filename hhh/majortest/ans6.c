#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *infinite_loop(void *arg)
{
    while(1) {
        printf("Infinite loop\n");
        sleep(1);
    }
    return NULL;
}
int main()
{
    pthread_t tid;
    int ret;
    ret = pthread_create(&tid, NULL, infinite_loop, NULL);
    if (ret != 0) {
        printf("Error creating thread\n");
        exit(1);
    }
    printf("Press enter key to cancel the thread...\n");
    getchar();
    ret = pthread_cancel(tid);
    if (ret != 0) {
        printf("Error canceling thread\n");
        exit(1);
    }
    ret = pthread_join(tid, NULL);
    if (ret != 0) {
        printf("Error joining thread\n");
        exit(1);
    }
    printf("Thread successfully canceled \n");
    return 0;
}
