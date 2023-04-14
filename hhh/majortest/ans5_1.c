#include <stdio.h>
#include <signal.h>

void handler(int signum) {
    printf("Received signal %d\n", signum);
}

int main() {
    // Block the first 20 signals
    for (int i = 1; i <= 20; i++) {
        signal(i, SIG_IGN);
    }

    // Check the status of SIGKILL and SIGSTOP signals
    sigset_t set;
    sigemptyset(&set);
    sigaddset(&set, SIGKILL);
    sigaddset(&set, SIGSTOP);

    int blocked;
    sigprocmask(SIG_BLOCK, &set, NULL);
    blocked = sigismember(&set, SIGKILL);
    printf("SIGKILL signal is %s\n", blocked ? "blocked" : "unblocked");
    blocked = sigismember(&set, SIGSTOP);
    printf("SIGSTOP signal is %s\n", blocked ? "blocked" : "unblocked");

    return 0;
}
