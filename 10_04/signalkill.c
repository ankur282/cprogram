#include<sys/types.h>
#include<signal.h>
#include<stdio.h>

int main()
{
    pid_t pid;
    int sig_no;
    printf("enter the pid of the process for which the signal nned to be send:");
    scanf("%d",&pid);
    printf("Enter the signal that need to be sent:");
    scanf("%d",&sig_no);
    kill(pid,sig_no);
    perror("sig_res:");
}