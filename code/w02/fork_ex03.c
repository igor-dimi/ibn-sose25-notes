#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    
    int a = 1;

    // creates a copy of this process, both proceses
    // continue executing after this insturction
    pid_t p = fork();

    if (p < 0) {
        perror("fork failed");
        exit(1);
    }
    
    // for the parent process here p == <child id>
    // for the child process here p == 0
    if (p == 0){
        a += 5;
        printf("%d\t%p\n", a, &a);
    }
    else { // parent
        a -= 5;
        printf("%d\t%p\n", a, &a);
    }

    return 0;
}
