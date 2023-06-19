#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdlib.h>

int main()
{
	key_t key= ftok("shmfile",65);
	int shmid = shmget(key,1024,0666|IPC_CREAT);
	char *msg = (char*)shmat(shmid,(void*)0,0);

	printf("Data read from the shred memory: %s\n",msg);

	shmdt(msg);

	shmctl(shmid,IPC_RMID,NULL);
}


