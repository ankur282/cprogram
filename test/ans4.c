#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *task(void *arg) {
    printf("Thread ID: %ld, Process ID: %d\n", (long)pthread_self(), getpid());
    pthread_exit(NULL);
}

int main() {
    pthread_t tid;
    pthread_create(&tid, NULL, task, NULL);
    pthread_join(tid, NULL);
    return 0;
}
