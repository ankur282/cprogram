#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netinet.h>
#include<stdio.h>
#include<stdio.h>

int main()
{
    int listfd,connfd,retval;
    socket_t clilen;
    struct sockaddr_in cliaddr,servaddr;
    listfd = socket(AF_INET,SOCK_STREAM,0);
    
}