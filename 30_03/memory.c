#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/mman.h>

int main()
{
    int fd,i;
    char *c;
    struct stat file_info;
    fd = open("Kernel.txt",O_CREAT|O_RDWR, 0777);
    write(fd,"LInux kernel Technology",25);
    fstat(fd,&file_info);
    printf("file size is %d\n",file_info.st_size);
    c = mmap(0,file_info.st_size,PROT_READ,MAP_PRIVATE,fd,0);
    perror("mamp");
    for(i=0;i<=16;i++)
    {
        printf("%s\n",c);
    }
    munmap(c,file_info.st_size);
    close(fd);
    return 0;

}