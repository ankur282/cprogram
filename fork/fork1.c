#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    int pid1;
    printf("current process pid = %d\n",getpid());
    pid1 = fork();

    if (pid1 == 0)
    {
        //sleep(5);
        printf("new child process pid = %d\n",getpid());
        printf("new child parent  process ppid = %d\n",getppid());

        /* code */
    }
    else
    {
        //sleep(3);
        printf("parent process pid = %d\n",getpid());
        printf("parent parent process ppid = %d\n",getppid());

    }
    //while(1);
    exit(0);
    
}