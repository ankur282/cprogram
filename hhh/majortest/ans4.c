#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    int status;

    while (1) {
        pid = fork();
        if (pid == -1) {
            printf("Error forking child process\n");
            exit(1);
        } else if (pid == 0) {
           execlp("ps", "ps", NULL);
            exit(0);
        } else {
            wait(&status);
        }
    }

    return 0;
}
