#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int fd,wfd,rfd;
    char buf[30]="hii I am ankur.";
    fd=open("file1.txt",O_RDONLY,|O 0666);
    if(fd==-1)
    printf("file dose not created\n");
    else
    printf("file created sucessfully\n");
    wfd=write(fd,buf,30);
    printf("%d\n",wfd);
}   