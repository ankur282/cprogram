#include<stdio.h>
#include<signal.h>

void check_blocked_sigs(sigset_t s)
{
    int i,res;
    
    for(i=1;i<20;i++)
    {
        res=sigismember(&s,i);
        if(res)
        printf("signal %d is blocked \n",i);
        else
        printf("SIgnal %d is not blocked \n",i);

    }
}

void sighand(int no)
{
    printf("I am in sighandler\n");
}

int main()
{
    sigset_t s_set,s;
    signal(1,sighand);
    sigemptyset(&s_set);
    sigaddset(&s_set,2);

    
    sigprocmask(SIG_BLOCK|SIG_SETMASK,&s_set,NULL);
    printf("PID of the process =%d\n",getpid());
    printf("send me signal one and see the effect now \n");
    getchar();
    getchar();
    sigpending(&s);
    check_blocked_sigs(s);
    getchar();
    sigprocmask(SIG_UNBLOCK,&s_set,NULL);
    printf("Now signal are unblocked\n");
    while (1);
    
}