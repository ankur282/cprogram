#include <stdio.h>
#include <pthread.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <string.h>
#include <semaphore.h>

sem_t s;

void* writer(void* arg) {
    key_t key = ftok("shmfile", 65);
    int shmid = shmget(key, 2048, 0666 | IPC_CREAT);
    char* msg = (char*)shmat(shmid, NULL, 0);

    while (1) {
        sem_wait(&s);

        printf("Write a message ('exit' to quit): ");
        fgets(msg, 2048, stdin);
        msg[strcspn(msg, "\n")] = '\0'; // Remove newline character

        if (strcmp(msg, "exit") == 0) {
            sem_post(&s);
            break;
        }

        sem_post(&s);
        sleep(1);
    }

    shmdt(msg);
    shmctl(shmid, IPC_RMID, NULL);
}

void* reader(void* arg) {
    key_t key = ftok("shmfile", 65);
    int shmid = shmget(key, 2048, 0666);

    while (1) {
        sem_wait(&s);

        char* msg = (char*)shmat(shmid, NULL, 0);
        printf("The message read from the shared memory is: %s\n", msg);

        sem_post(&s);
        sleep(1);
    }
}

int main() {
    pthread_t t1, t2;
    sem_init(&s, 0, 1);

    pthread_create(&t1, NULL, writer, NULL);
    sleep(1); // Wait for writer to create shared memory
    pthread_create(&t2, NULL, reader, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    sem_destroy(&s);
    return 0;
}

