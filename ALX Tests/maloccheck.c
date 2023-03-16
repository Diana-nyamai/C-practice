#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - entry point
* @b: input
* Description: function
* Return: nothing
*/

void *malloc_checked(unsigned int b)
{
    void *newMemory;

    newMemory = malloc(b);

    if (newMemory == NULL)
        exit(98);

    return (newMemory);
}
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}