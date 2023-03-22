#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd;
    fd = open("dumpdemo.txt",O_RDWR|O_CREAT|O_TRUNC,0660);
    printf("%d\n",fd);
    while(1);
    
    // if(fd < 0)
    // {
    //     printf("Could not open file\n");
    //     exit(2);
    // }
    // dup2(fd,1);
    // printf("sample starting one\n");
    // printf("sample starting two\n");
    // printf("sample starting three\n");
}