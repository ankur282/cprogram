#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>

int main()
{
    pid_t pid;
    int option,start;
    while (1)
    {
        printf("Enter 1 to exec 'ls'program in child process and 0 to exit\n ");
        scanf("%d",&option);
        if (!option)
        {
            exit(0);
            /* code */
        }
        printf("\n");
        if (fork()==0)
        {
            execl("/bin/ls","ls",0);
            exit(5);
            /* code */
        }
        pid = wait(&start);
        printf("child with pid %d is terminated \n",pid);
        
        
        /* code */
    }
    
}