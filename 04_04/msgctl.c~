#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>

int main()
{
    int qid;
    
    qid = msgget(555,IPC_CREAT|644);
    printf("qid = %d\n",qid);
    getchar();
    msgctl(qid,IPC_RMID,NULL);
}