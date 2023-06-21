#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>

#define PORT 8080
#define MAX_BUFFER_SIZE 1024

int main() {
    int client_socket;
    struct sockaddr_in server_address;
    char buffer[MAX_BUFFER_SIZE] = {0};
    char *client_message[1024];

    // Create socket
    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &server_address.sin_addr) <= 0) {
        perror("Invalid address/ Address not supported");
        exit(EXIT_FAILURE);
    }

    // Connect to the server
    if (connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }
    while(1){

    // Send a message to the server
    printf("Write a message:");
    fgets(client_message,1024,stdin);
    send(client_socket, client_message, strlen(client_message), 0);
    printf("Message sent to the server.\n");

    // Read data from the server
    read(client_socket, buffer, MAX_BUFFER_SIZE);
    printf("Received message from server: %s\n", buffer);
    }

    close(client_socket);

    return 0;
}

