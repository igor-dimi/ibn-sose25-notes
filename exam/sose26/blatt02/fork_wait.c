#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0) {
        // child process
        exit(0);
    }
    else if (pid > 0) {
        // parent process
        waitpid(pid, NULL, 0);
    }
    else {
        // fork failed
        exit(1);
    }

    return 0;
}