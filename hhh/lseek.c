#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd,len;
    char buf[50]="Hi,my name is ankur.";
    fd=open("test.txt",O_CREAT|O_RDWR,777);
    len = write(fd,buf,50);
    printf("return value form write optn=%d\n",len);
    lseek(fd,0,SEEK_END);
    read(fd,buf,len);
    printf("data from buffer read optn=%s\n",buf);
    lseek(fd,0,SEEK_SET);
    read(fd,buf,len);
    printf("the cursur is=%s ",buf);
    lseek(fd,3,SEEK_CUR);
    read(fd,buf,len);
    printf("the cursur is=%s ",buf);

   
    write(fd,buf,50);



  
    close(fd);

    return 0;
    

}