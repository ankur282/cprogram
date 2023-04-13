#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before execl: This is the original program\n");
    execl("/bin/ls", "ls", "-l", NULL);
    printf("After execl: This line should not be reached\n");
    return 0;
}
