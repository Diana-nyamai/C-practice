// Example of a dprintf
#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int output = STDOUT_FILENO;
    char *name = "Diana";
    int age = 24;

    dprintf(output, "name: %s\t age: %d ", name, age);
    return 0;
}
