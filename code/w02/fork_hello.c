#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    fork();
    fork();
    fork();
    printf("hello\n");
    return 0;
}
