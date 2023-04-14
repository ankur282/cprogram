#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int main() {
    pthread_attr_t attr;
    size_t stack_size;
    void *stack_addr;
    pthread_t tid;
    int ret;
    pthread_attr_init(&attr);

   
    stack_size = 5 * 1024 * 1024;
    pthread_attr_setstacksize(&attr, stack_size);

 
    pthread_attr_getstack(&attr, &stack_addr, &stack_size);
    printf("New stack address: %p\n", stack_addr);

    
    ret = pthread_create(&tid, &attr, my_thread_function, NULL);
    if (ret != 0) {
        fprintf(stderr, "Error creating thread: %d\n", ret);
        exit(EXIT_FAILURE);
    }

    
    pthread_attr_destroy(&attr);

    return 0;
}

void *my_thread_function(void *arg) {
    // Thread code here
printf("hello world");
    return NULL;
}

