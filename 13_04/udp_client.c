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
    char *msg = "Hi I am ankur:";
    int sockfd,ret_val;
    socklen_t addr_len;
    struct sockaddr_in servaddr;
    sockfd = socket(AF_INET,SOCK_DGRAM,0);
    if(sockfd < 0)
    {
        perror("error:");
        exit(1);

    }
    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(8000);
    inet_pton(AF_INET,serv_ip,&servaddr.sin_addr);
    addr_len = sizeof(struct sockaddr_in);

    ret_val = sendto(sockfd,msg,strlen(msg),0,(struct socketaddr *)&servaddr,addr_len);
    printf("ret val of sendto = %d\n",ret_val);
    close(sockfd);

}
