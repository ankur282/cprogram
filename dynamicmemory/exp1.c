#include<stdio.h>
#include<stdlib.h>

// void main()
// {
//     int *p;
//     p = (int *)malloc(sizeof(int));
//     p=25;
//     printf("%d",*p);
//     free(p);
//     }
void main()
{
    int *list=malloc(3*sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0]=1;
    list[1]=2;
    list[2]=3;

    printf("%d\n",list[0]);
    printf("%d\n",list[1]);
    printf("%d\n",list[2]);
    
}