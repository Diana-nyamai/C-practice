#include <stdio.h>
#include <stdlib.h>

int allocate_mem(int **ptr, int size)
{
    *ptr = malloc(size * sizeof(int));
    if (*ptr == NULL)
    {
        printf("could not allocate memory\n");
        exit(EXIT_FAILURE);
    }
    return (0);
}
int main(int argc, char const *argv[])
{
    int *ptr;
    allocate_mem(&ptr, 20);
    
    free(ptr);
    return 0;
}
