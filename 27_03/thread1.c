#include<stdio.h>
#include<stdlib.h>

#include<pthread.h>

pthread_t tid;

void* thread(void *arg)
{
    sleep(1);
    printf("new created thread is executing:\n");
    return NULL;
}

int main(void)
{
    int ret = pthread_create(&tid,NULL,thread,NULL);
    
    printf("%d\n",ret);
    if(ret)
    {
        printf("Thread is not created\n");

    }
    else
    {
        printf("Thread is created\n");

    }
    // pthread_join(tid,NULL);
    return 0;

}