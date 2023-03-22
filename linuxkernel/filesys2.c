#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd1,fd2,fd3,fd4;
    char buf[200];
    fd1=open("linuxnew.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);
    fd2=open("p22.c",O_WRONLY|O_CREAT|O_TRUNC,0777);
    printf("fd of fp1 = %d\n",fd1);
    printf("fd of fp2= %d\n",fd2);

    fd3=dup2(fd1,45);
    printf("I will be printed in the file tricky.txt\n");

    printf("fp3 is our defined dup of fp1 = %d\n",fd3);

    close(fd3);
    close(fd2);
    close(fd1);

}