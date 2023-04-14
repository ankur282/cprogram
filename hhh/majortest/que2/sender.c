#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
 
struct msgbuf
{
    long mtype;//mtype is the type
    char data[512];//data is to send to process
};
int main(int argc,char *argv[])
{
    struct msgbuf v;
    int id;
    id=msgget(55,IPC_CREAT|0644);
    printf("id=%d\n",id);
    v.mtype=atoi(argv[1]);//argument 1 is type of message converting ascii to int
    strcpy(v.data,argv[2]);//argument 2 is message
    msgsnd(id,&v,strlen(v.data)+1,0);//flag IPC_NOWAIT
    //perror("msgsnd");             //"./wrt" "type " "data"
    return 0;
}