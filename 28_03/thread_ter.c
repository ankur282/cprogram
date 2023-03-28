#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

void *PrintHello(void *threadid)
{
    printf("\n Hello WOrld:!\n");
    printf("I am waiting");
    while (1);
    
}

int main()
{
    pthread_t thread;
    int rc,t=0;
    printf("creating Thread %d\n",t);
    rc=pthread_create(&thread,NULL,PrintHello,NULL);
    printf("\n Thread ID : %lu",thread);

    // pthread_join(thread,NULL);

    sleep(6);
    t=pthread_cancel(thread);
    if(t==0)
    printf("\n cancel thread\n");
    printf("\n thread ID :%lu\n",thread);
}