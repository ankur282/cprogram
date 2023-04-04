#include<sys/shm.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char *ptr;
    int shmid,pid;

    shmid=shmget((key_t)1,20,IPC_CREAT | 0666);
    ptr=(char*)shmat(shmid,(char)0,0);
    pid=fork();

    if (pid == 0)
    {
        strcpy(ptr,"shared memory");
        /* code */
    }
    else
    {
        wait(0);
        printf("Parent reads.......%c\n",*(ptr+2));
        printf("Parent reads...%s\n",ptr);
    }
    
}