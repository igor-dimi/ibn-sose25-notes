#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void forkexample()
{
    int x = 1;
    pid_t p = fork();

    if (p < 0) {
        perror("fork fail");
        exit(1);
    }

    else if (p == 0) printf("child x = %d\n", ++x);
    else printf("parent x = %d\n", --x);
}

int main(int argc, char const *argv[])
{
    forkexample();
    return 0;
}
