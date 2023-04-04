#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>

int main()
{
    int qid;
    struct msqid_ds buf;
    qid = msgget(55,IPC_CREAT|0644);
    printf("qid = %d\n",qid);
    msgctl(qid,IPC_STAT,&buf);
    printf("Here are the details of the queue\n");
    printf("no of msg in q %d\n",buf.msg_qnum);
    printf("no of bytes in q %d\n",buf.msg_cbytes);

    
}