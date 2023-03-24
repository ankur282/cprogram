#include<stdio.h>
int main()
{
    int ret;
    printf("I am going to exec an command line args\n");
    ret= execl("/home/ankur/Documents/c_traning/process_mgnt","./cmdargv","linux","kernel",0);
    printf("I executed ls program%d\n",ret);
    
}