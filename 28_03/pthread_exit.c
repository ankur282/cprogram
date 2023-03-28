#include<stdio.h>
#include<pthread.h>

pthread_once_t once = PTHREAD_ONCE_INIT;

void myinti()
{
    printf("\n I am in INIT Function\n");

}

void *mythread(void *i)
{
    printf("\n i am in my thread : %d \n",(int *)i);
    pthread_once(&once,myinti);
    printf("\n Exit from my thread : %d \n",(int *)i);

}
int main()
{
    pthread_t thread1,thread2,thread3;
    pthread_create(&thread1,NULL,mythread,(void *)1);
    pthread_create(&thread2,NULL,mythread,(void *)2);
    pthread_create(&thread3,NULL,mythread,(void *)3);
    pthread_exit(NULL);
}