#include<stdio.h>
#include<fcntl.h>
#define BUF_SIZE 1024

int main(int argc)
{
    int inputFd,output,openFlags;
    mode_t filePerms;
    ssize_t numRead;
    char buf[BUF_SIZE];

    inputFd = open("file123.txt",O_RDONLY);
    if(inputFd == -1)
    {
        printf("open Error\n");
        return;

    }
    output = open("File243434.txt",O_CREAT|O_RDWR,777);
    if(output == -1)
    {
        printf("Opening file\n");
        return;

    }
    while((numRead = read(inputFd,buf,BUF_SIZE))>0)
    {
        if(write(output,buf,numRead)!= numRead)
        {
            printf("Write Error\n");
            return;
        }
        printf("%d",numRead);
    }
    if (numRead == -1)
    {
        return;
    }
    if (close(inputFd)== -1)
    {
        printf("Close input\n");
        return;
        /* code */
    }
    if (close(output)== -1)
    {
        printf("Close output\n");
        return;
        /* code */
    }
    
    
}