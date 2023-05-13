#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sockfd, new_sockfd;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_addr_size;
    char buffer[BUFFER_SIZE];

    // Create socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Error creating socket");
        exit(1);
    }

    // Set server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // Bind socket to address
    if (bind(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("Error binding socket");
        exit(1);
    }

    // Listen for incoming connections
    listen(sockfd, 10);
    printf("Server listening on port %d...\n", PORT);

    // Accept incoming connections
    client_addr_size = sizeof(client_addr);
    new_sockfd = accept(sockfd, (struct sockaddr*)&client_addr, &client_addr_size);
    if (new_sockfd < 0) {
        perror("Error accepting connection");
        exit(1);
    }

    // Read data from client and send a response
    while (1) {
        memset(buffer, 0, BUFFER_SIZE);
        int n = read(new_sockfd, buffer, BUFFER_SIZE);
        if (n <= 0) {
            perror("Error reading from socket");
            exit(1);
        }
        printf("Received from client: %s", buffer);
        write(new_sockfd, buffer, n);
    }

    // Close sockets
    close(new_sockfd);
    close(sockfd);

    return 0;
}

