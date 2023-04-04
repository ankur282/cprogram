#include<sys/shm.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    struct shmid_ds buf;
    // size_t k=10;
    size_t s=20;
    int sid;
    sid = shmget(555,s,0666|IPC_CREAT);
    printf("Sh mem ID : %d\n",sid);
    int *atch;
    atch = shmat(sid,0,0);
    printf("0x%x\n",atch);

    int con;
    con=shmctl(sid,IPC_STAT,&buf);
    printf("control : %d\n",con);

    printf("size of shared memory : %d\n",buf.shm_segsz);

    printf("\n\n");
    exit(0);
}