#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *name = "Diana ndinda";
    char **pp = &name;
    char ***ppp = &pp;

    int num = 8;
    int *num1 = &num;
    int **num2 = &num1;

    printf("%s\n ", **ppp);
    printf("%d\n", **num2);
    return (0);
}