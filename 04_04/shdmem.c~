#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<stdio.h>
#define SHM_SIZE 1024 

int main(int argc,char *argv[])
{
    key_t key;
    int shmid;
    char *data;
    int mode;

    if(argc > 2)
    {
        fprintf(stderr,"usage: shmdemo [data_to_write]\n");
        exit(1);

    }
    if((shmid=shmget(111,SHM_SIZE,0644 | IPC_CREAT))==-1)
    {
        perror("shmget");
        exit(1);

    }
    data=shmat(shmid,(void*)0,0);
    if(data == (char*)(-1))
    {
        perror("shmget");
        exit(0);
    }

    if(argc == 2)
    {
        printf("writing to segment : \"%s\"\n",argv[1]);
        strncpy(data,argv[1],SHM_SIZE);

    }
   printf("writing to segment : \"%s\"\n",data);
   if(shmdt(data)==-1)
   {
    perror("shmdt");
    exit(0);
   }
   return 0;
}