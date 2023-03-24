#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("\n FIle Name : %s\n",argv[0]);
    printf("\n Total Number of Arguments : %d",argc);
    printf("\n Arguments Passed : ");
    for (i = 0; i < argc; i++)
    {
        printf("%s",argv[i]);

        /* code */
    }
    printf("\n");
    
}