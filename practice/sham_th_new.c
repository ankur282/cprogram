#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <string.h>

void* writer(void* arg)
{
    key_t key = ftok("shmfile", 65);
    int shmid = shmget(key, 2048, 0666 | IPC_CREAT);
    char* msg = (char*)shmat(shmid, NULL, 0);

    printf("Write a message: ");
    scanf("%20s", msg);

    printf("The message is: %s\n", msg);

    shmdt(msg);
    sleep(1);
}

void* reader(void* arg)
{
    key_t key = ftok("shmfile", 65);

    int shmid = shmget(key, 2048, 0666 | IPC_CREAT);
    char* msg = (char*)shmat(shmid, NULL, 0);

    printf("The message read from the shared memory is: %s\n", msg);

    shmdt(msg);
    shmctl(shmid, IPC_RMID, NULL);
}

int main()
{
    pthread_t t1, t2;

    pthread_create(&t1, NULL, writer, NULL);
    pthread_create(&t2, NULL, reader, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}

