#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHARED_MEM_SIZE 1024

int main() {
    int shmid;
    key_t key;
    char *shm;

    // Generate a unique key
    if ((key = ftok("shared_memory_key", 'R')) == -1) {
        perror("ftok");
        exit(1);
    }

    // Allocate a shared memory segment
    if ((shmid = shmget(key, SHARED_MEM_SIZE, IPC_CREAT | 0666)) == -1) {
        perror("shmget");
        exit(1);
    }

    printf("Shared memory ID: %d\n", shmid);

    // Attach to the shared memory segment
    if ((shm = shmat(shmid, NULL, 0)) == (char *) -1) {
        perror("shmat");
        exit(1);
    }

    // Write some data to the shared memory
    sprintf(shm, "Hello, world!");

    // Detach from the shared memory segment
    if (shmdt(shm) == -1) {
        perror("shmdt");
        exit(1);
    }

    // Remove the shared memory segment from the system
    if (shmctl(shmid, IPC_RMID, NULL) == -1) {
        perror("shmctl");
        exit(1);
    }

    return 0;
}
