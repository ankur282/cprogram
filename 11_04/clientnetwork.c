#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *serv_ip = "127.0.0.1";
    int ret_val,socketfd;
    struct sockaddr_in servaddr;
    socketfd = socket(AF_INET,SOCK_STREAM,0);

    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_port = htons(8000);

    inet_pton(AF_INET,serv_ip,&servaddr.sin_addr);
    ret_val=connect(socketfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
    printf("client established connect with server\n");
    if (ret_val<0)
    {
        perror("connect");
        exit(1);

    }
    printf("client establised connection with server\n");
    close(socketfd);
    
}