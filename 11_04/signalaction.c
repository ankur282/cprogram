#include<stdio.h>
#include<signal.h>

void sigHandler(int sigNo)
{
    printf("Signal handler function displaying signo:%d\n",sigNo);


}

int main()
{
    struct sigaction act;
    act.sa_handler = sigHandler;
    act.sa_flags = 0;
    sigemptyset(&act.sa_mask);
    sigaction(SIGINT,&act,0);

    while (1)
    {
        printf("HELLO WORLD\n");
        sleep(1);
        /* code */
    }
     

}