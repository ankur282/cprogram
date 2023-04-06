#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<error.h>
#include<bits/types.h>
#include<sys/types.h>

static pthread_spinlock_t slock;

void *spinloackThread(void *i)
{
    int rc;
    int count=0;
    printf("Enter tread %d , getting spin lock \n",(int *)i);
    rc = pthread_spin_lock(&slock);
    printf("%d thread unlock the spin lock..... after 5 secound\n",(int *)i);
    rc = pthread_spin_unlock(&slock);
    printf("%d thread completed\n",(int *)i);


}

int main()
{
    int rc =0;
    pthread_t thread,thread1;

    if(pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE)!=0)
    perror("init");
    printf("main get spin loack\n");
    printf("Main, create the spin loack");

    rc = pthread_create(&thread,NULL,spinloackThread,(int *)1);
    printf("Mian wait a bit holding the spin lock \n");
    sleep(5);
    printf("Main , now unlock the spin lock\n");
    rc = pthread_spin_unlock(&slock);

    if(rc == 0)
    printf("\n Mian Thread successfully unlocked\n");
    else
    printf("\n Mian Thread unsuccessfully unlocked\n");

    printf("Main, wait for the thread to end\n");

    rc = pthread_join(thread,NULL);
    rc = pthread_spin_destroy(&slock);

    printf("Main completed\n");
    return 0;


}