#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>


void* transmitter(void *arg)
{
   
    char msg[50];
    int msgid;

    
    msgid = msgget(65, 0666 | IPC_CREAT);
    while(1)
    {
    printf("start one writing message to the receiver.\n");
    scanf("%s",msg);
    
    msgsnd(msgid,&msg,sizeof(msg),0);
    
    printf("message send.... \n");
    sleep(1);
    
    }
    msgctl(msgid, IPC_RMID, NULL);
    

}
void* receiver(void *arg)
{
    char rcv_msg[50];
    int msgid;
    
    
    msgid = msgget(65, 0666);
    
    while(1)
    {
    msgrcv(msgid, &rcv_msg, sizeof(rcv_msg),0, 0);
  
    printf("message Received: %s \n",rcv_msg);
  
    
    }
    msgctl(msgid, IPC_RMID, NULL);
    
    

}



int main()
{

    pthread_t pt1,pt2;
    
 
    pthread_create(&pt1,NULL,transmitter,NULL);
    pthread_create(&pt2,NULL,receiver,NULL);
    
    
    pthread_join(pt1,NULL);
    pthread_join(pt2,NULL);
    printf("End of main thread\n");
  
   

}
