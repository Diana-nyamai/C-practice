#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - entry point
* @ptr: input
* @old_size: input
* @new_size: input
* Description: function
* Return: 0
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    unsigned int i; 
    char *newptr, *oldptr;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
    {
        newptr = malloc(new_size);
        if (newptr == NULL)
            return (NULL);
        free(ptr);
        return (newptr);
    }
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    newptr = malloc(new_size);

    if (newptr == NULL)
        return (NULL);
    
    oldptr = ptr;

    for (i = 0; i < old_size; i++)
        newptr[i] = oldptr[i];
    
    free(ptr);
    return (newptr);
       
}
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}