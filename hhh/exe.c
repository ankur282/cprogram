#include <stdio.h>
#include <signal.h>

void sigint_handler(int signum)
{
    printf("Received SIGINT signal!\n");
}

int main()
{
    signal(SIGINT, sigint_handler);

    while (1) {
        // do something
    }

    return 0;
}

