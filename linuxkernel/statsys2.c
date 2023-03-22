#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
    struct stat st;
    int fd;
    fd=open("p22.c",O_RDONLY);
    fstat(fd,&st);
    // stat("p22.c",&st);
    printf("File size  == %lu\n",st.st_size);
    printf("file inode =%lu \n",st.st_ino);
    printf("size disc of block = %lu \n",st.st_blksize);
    printf("file userid =%lu \n",st.st_uid);
    printf("file group id =%lu \n",st.st_gid);
    printf("file group id =%lu \n",st.st_mtim);
    printf("file group id =%lu \n",st.st_gid);
    printf("file group id =%lu \n",st.st_);
    printf("\n");
    close(fd);
    return 0;
}