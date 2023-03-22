#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd1,fd2,fd3;
    fd2 = open("linux111.txt", O_WRONLY,777);
    printf("fd return = %d",fd2);
    close(fd2);
}