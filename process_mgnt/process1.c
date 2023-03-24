#include<stdio.h>

main()
{
    int id;
    int cnt=0;
    printf("i am going to create a new process\n");
    id=fork();
    if (id)
    {
        while (cnt < 10)
        {
            cnt++;
            printf("I am parent , my child process is %d\n",id);
            sleep(1);

            /* code */
        }
        
        /* code */
    }
    else
    {
        while (cnt < 18)
        {
            cnt++;
            printf("I am child process i got id value as %d\n",id);
            sleep(1);
            /* code */
        }
        
    }
    
}