
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd,len;
    char write_buf[50]="Hi,how are you?,wow";
    char read_buf[50];
    fd=open("linux1122.txt",O_CREAT|O_RDWR,0777);
    len = write(fd,write_buf,50);
    printf("return value form write optn=%d\n",len);
    read(fd,read_buf,len);
    printf("data from buffer read optn=%s\n",read_buf);
   

    write(fd,write_buf,60);

  
    close(fd);

    return 0;
    

}