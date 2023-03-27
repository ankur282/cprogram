#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    pid_t chpid1,chpid2,child1,child2;
    int it,stat;
    printf("I am a process my process id is %d\n",getpid());
    printf("I am creating two child process & make them run some code \n");

    child1=fork();
    if(child1=0)
    {
        printf("I am first chiuld, my pid is %d\n",getpid());
        printf("I am tried, sleeping for 10 secound\n");
        exit(0);

    }
    child2=fork();
    if(child2 == 0)
    {
        printf("I am secound child, my pid is %d\n",getpid());
        printf("I am tried, sleeping for 5 secound \n");
        sleep(5);
        exit(0);
/
    }
    printf("I am parent , my childern are working & sleeping, i wait for them\n");
    chpid1 = waitpid(child1,&stat,0);
    printf("My first child terminated with status %d\n",WEXITSTATUS(stat));
    printf("terminated child1 pid from wait =%d\n",chpid1);

    chpid2 = waitpid(child2,&stat,0);
    printf("My secound child terminated with status %d\n",WEXITSTATUS(stat));
    printf("terminated child1 pid from wait =%d\n",chpid2);
    
    

    
 

    printf("Both children get termunated,now i will do the same \n");
}