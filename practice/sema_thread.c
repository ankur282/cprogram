#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <pthread.h>

#define SHARED_MEMORY_KEY 1234

typedef struct {
    int count;
} SharedData;

void wait_binary_semaphore(SharedData* sharedData) {
    while (sharedData->count <= 0)
        ; // Busy wait until semaphore is available

    sharedData->count--;
}

void signal_binary_semaphore(SharedData* sharedData) {
    sharedData->count++;
}

void* thread1(void* arg) {
    SharedData* sharedData = (SharedData*)arg;

    printf("Thread 1: Waiting for semaphore\n");
    wait_binary_semaphore(sharedData);
    printf("Thread 1: Semaphore acquired\n");

    // Critical section
    printf("Thread 1: Performing critical section operation\n");
    sleep(2); // Simulate some work in the critical section

    signal_binary_semaphore(sharedData);
    printf("Thread 1: Semaphore released\n");

    pthread_exit(NULL);
}

void* thread2(void* arg) {
    SharedData* sharedData = (SharedData*)arg;

    printf("Thread 2: Waiting for semaphore\n");
    wait_binary_semaphore(sharedData);
    printf("Thread 2: Semaphore acquired\n");

    // Critical section
    printf("Thread 2: Performing critical section operation\n");
    sleep(2); // Simulate some work in the critical section

    signal_binary_semaphore(sharedData);
    printf("Thread 2: Semaphore released\n");

    pthread_exit(NULL);
}

int main() {
    // Create shared memory
    int shmid = shmget(SHARED_MEMORY_KEY, sizeof(SharedData), IPC_CREAT | 0666);
    if (shmid == -1) {
        perror("shmget");
        exit(1);
    }

    // Attach shared memory
    SharedData* sharedData = (SharedData*)shmat(shmid, NULL, 0);
    if (sharedData == (SharedData*)-1) {
        perror("shmat");
        exit(1);
    }

    // Initialize shared data
    sharedData->count = 1; // Binary semaphore

    // Create threads
    pthread_t tid1, tid2;
    pthread_create(&tid1, NULL, thread1, sharedData);
    pthread_create(&tid2, NULL, thread2, sharedData);

    // Wait for threads to finish
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    // Detach and remove shared memory
    shmdt(sharedData);
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}

