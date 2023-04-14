#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

// shared resource
int count = 0;

// semaphore
sem_t semaphore;

// thread function
void *increment_thread(void *arg)
{
    int i;
    for (i = 0; i < 10; i++) {
        sem_wait(&semaphore);
        count++;
        printf("Increment thread: count = %d\n", count);
        sem_post(&semaphore);
    }
    pthread_exit(NULL);
}

void *decrement_thread(void *arg)
{
    int i;
    for (i = 0; i < 10; i++) {
        sem_wait(&semaphore);
        count--;
        printf("Decrement thread: count = %d\n", count);
        sem_post(&semaphore);
    }
    pthread_exit(NULL);
}

int main()
{
    // initialize semaphore
    sem_init(&semaphore, 0, 1);

    // create threads
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, increment_thread, NULL);
    pthread_create(&thread2, NULL, decrement_thread, NULL);

    // wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // destroy semaphore
    sem_destroy(&semaphore);

    return 0;
}