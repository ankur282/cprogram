#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    pid_t chpid,child1,child2;
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

    }
    printf("I am parent , my childern are working & sleeping, i wait for them\n");
    chpid = wait(&stat);
    if (chpid == child1)
    {
        printf("My first child terminated with status %d\n",WEXITSTATUS(stat));
    }
    if (chpid == child2)
    {
        printf("My secound child terminated with status %d\n",WEXITSTATUS(stat));
    }

    chpid = wait(&stat);
     if (chpid == child1)
    {
        printf("My first child terminated with status %d\n",WEXITSTATUS(stat));
    }
    if (chpid == child2)
    {
        printf("My secound child terminated with status %d\n",WEXITSTATUS(stat));
    }

    printf("Both children get termunated,now i will do the same \n");
}