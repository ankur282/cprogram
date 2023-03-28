#include<stdio.h>
#include<stdlib.h>
#include<bits/local_lim.h>
#include<pthread.h>

int main()
{
    pthread_attr_t tattr;

    pthread_t tid;
    int ret;
    void *stackbase;
    int size = PTHREAD_STACK_MIN + PTHREAD_STACK_MIN;
    size_t size1;
    stackbase = (void *)malloc(size);

    ret = pthread_attr_init(&tattr);
    ret = pthread_attr_getstacksize(&tattr,&size1);

    printf("\n Default stack size %u :\n ",pthread_d=PTHREAD_STACK_MIN);
    ret= pthread_attr_setstacksize(&tattr,size);
    ret= pthread_attr_setstacksize(&tattr,&size1);
    printf("\n Uaser stack sisze %u : \n",size1);


}