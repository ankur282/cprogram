#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
//#include<sys/mman.h>
#include<stdlib.h>

void *proc(void *param)
{
    sleep(2);
    return 0;

}

int main()
{
    pthread_attr_t Attr;
    pthread_t Id;
    void *stk;
    size_t Siz;
    int err;

    size_t my_stksize = 30000000;
    void *my_stack;

    pthread_attr_init(&Attr);

    pthread_attr_getstacksize(&Attr,&Siz);
    pthread_attr_getstackaddr(&Attr,&stk);

    printf("Default : Addr=%08x Default Size = %d\n",stk,Siz);

    my_stack= (void*)malloc(my_stksize);

    pthread_attr_setstack(&Attr,my_stack,my_stksize);
    pthread_create(&Id,&Attr,&proc,NULL);

    pthread_attr_getstack(&Attr,&stk,&Siz);

    printf("Newly defined stack : ADDR=%08x and Size=%d\n",stk,Siz);
    sleep(3);
    return(0);


}