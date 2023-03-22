
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd,len;
    char write_buf[50]="Hi,how are you?,wow";
    char read_buf[50];
    fd=open("linux113332.txt",O_CREAT|O_RDWR,777);
    len = write(fd,write_buf,50);
    printf("return value form write optn=%d\n",len);
    lseek(fd,0,SEEK_END);
    read(fd,read_buf,len);
    printf("data from buffer read optn=%s\n",read_buf);\

   

    write(fd,write_buf,60);

  
    close(fd);

    return 0;
    

}
