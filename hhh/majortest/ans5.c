#include<stdio.h>
#include<signal.h>
void check_blocked_sigs()
{
    int i,res;
    sigset_t s;
    sigprocmask(SIG_BLOCK,NULL,&s);//first param is not considered
    for(i=1;i<21;i++)
    {
        res=sigismember(&s,i);
        if(res)
        printf("signal %d is blocked\n",i);
        else
        printf("signal %d is not blocked\n",i);
    }

}

main()
{
    int i;
    sigset_t s_set;
    sigemptyset(&s_set);
    for(i=1;i<21;i++)
    {
        sigaddset(&s_set,i);
    }
    sigprocmask(SIG_BLOCK|SIG_SETMASK,&s_set,NULL);
    check_blocked_sigs();
}

