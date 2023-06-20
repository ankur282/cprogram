#include<stdio.h>
#include<pthread.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>
#include<semaphore.h>

sem_t s;


void* writer(void *arg)
{
	sem_wait(&s);

	key_t key = ftok("shmfile",65);
	int shmid = shmget(key,2048,0666|IPC_CREAT);
	char *msg = (char*)shmat(shmid,NULL,0);

	printf("Write a msg:");
	//scanf("%20s",msg);
	gets(msg);

	printf("The message is:%s\n",msg);
	shmdt(msg);
	sleep(1);
	sem_post(&s);

}

void* reader(void *arg)
{
	sem_wait(&s);
	key_t key = ftok("shmfile",65);

	int shmid = shmget(key,2048,0666);
	char *msg =(char*)shmat(shmid,NULL,0);

	printf("the message read from the shared memory is:%s\n",msg);

	shmdt(msg);
	shmctl(shmid,IPC_RMID,NULL);
	sem_post(&s);

}



int main()
{

	pthread_t t1,t2;
	sem_init(&s,0,1);

	pthread_create(&t1,NULL,writer,NULL);
	pthread_create(&t2,NULL,reader,NULL);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
}
