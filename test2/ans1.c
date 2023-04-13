#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

main()
{
	int qid;
	struct msqid_ds buf;
	qid = msgget(55,IPC_CREAT|0644);//create
	printf("qid =%d\n",qid);
	msgctl(qid,IPC_STAT,&buf);
	printf("Details of the message queue\n");
	printf("No of Messages in queue :  %d\n",buf.msg_qnum);
	printf("No of Bytes in queue :  %d\n",buf.msg_cbytes);
	msgctl(qid, IPC_RMID, NULL);//Remove
}
