#include <stdio.h>
#include <unistd.h>

int main(void)
{
        char *args[] = {"ls", "-la", NULL};
        execvp(args[0], args);
        printf("this line will not be executed\n");
        return (0);
}