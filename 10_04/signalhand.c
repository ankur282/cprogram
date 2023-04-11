#include<signal.h>

void sighand(int sig_num)
{
    printf("Abourt signal rec'd \n");
    printf("we can use this to perform clean up op's \n");

}

int main()
{
    signal(SIGABRT,sighand);
    printf("some thing has gone worng \n");
    abort();
    
    printf("can you see this \n");
    printf("can you see this \n");
    printf("can you see this \n");
}