#include<signal.h>

void sighand(int signum)
{
    printf(" i have to wake up my boss \n");
    //alarm(5);

}

int main()
{
    signal(SIGALRM,sighand);
    alarm(5);

    printf("\nHELLO\n");
    while (1)
    {
        /* code */
    }
    
}