#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pid,stat;
    pid = fork();
    if(pid == 0)
    {
        printf("\nCHILD PROCESS\n");
        exit(0);
    
    }
    pid = wait(&stat);
    printf("%d\n",WEXITSTATUS(stat));
    fprintf(FILE *fs,"heklokhh",)
}