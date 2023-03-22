#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int)*4);
    int x=10;
    int y=22;
    *ptr=&x;
    printf("%d\n",*ptr);
    free(ptr);

    ptr=&y;
    printf("%d\n",*ptr);


}