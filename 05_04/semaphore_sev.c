#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<string.h>

#define MY_KEY 1992
#define SHM_SIZE 0x1000

int main(){
	int semId,shmId;
	char *pShm;
	struct sembuf smop;
	
	semId = semget(MY_KEY,1,0660|IPC_CREAT);
	if(semId <0){
		printf("could not creat semaphore\n");
		return(1);
	}
	else{
		printf("opened a semaphore ID is %d\n",semId);
		
	}
	semctl(semId,0,SETVAL,0);
	
	shmId = shmget(MY_KEY, SHM_SIZE, 0660|IPC_CREAT);
	if(shmId<0){
		printf("could not creat shared sagment \n");
		return (2);
	}
	pShm=shmat(shmId,NULL,0);
	if(!pShm){
		printf("could not attach shared memory segment.\n");
		return(3);
	}
	
		smop.sem_num = 0;
		smop.sem_op = 0;
		smop.sem_flg = 0;
		
		semop(semId,&smop,1);
		
		printf("got the semaphore \n");
		printf("%s\n",pShm);
}
