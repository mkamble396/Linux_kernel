#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
    int x = 2;
    int pid = fork();
    if (pid == -1) {
        return 1;
    }

    if (pid == 0) {
        x++;
        printf("pid in child :%d",getpid());
    }
    sleep(2);
    printf("Value of x: %d\n", x);
    if (pid != 0) {
        wait(NULL);
    }
    return 0;
}

