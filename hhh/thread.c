#include <pthread.h>
#include <limits.h>

pthread_attr_t tattr;
pthread_t tid;
int ret;

size_t size = PTHREAD_STACK_MIN + 0x4000;


ret = pthread_attr_init(&tattr);


ret = pthread_attr_setstacksize(&tattr, size);


ret = pthread_create(&tid, &tattr, start_routine, arg); 

