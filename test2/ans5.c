#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX_COUNT 1000000

int count = 0;

pthread_mutex_t mutex;

void *increment(void *arg) {
    int i;
    for (i = 0; i < MAX_COUNT; i++) {
        pthread_mutex_lock(&mutex);
        count++;
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t t1, t2;

    pthread_mutex_init(&mutex, NULL);

    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, increment, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&mutex);

    printf("Count: %d\n", count);

    return 0;
}