#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - entry point
* @nmemb: input
* @size: input
* Description: function
* Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int *ptr;


    if (nmemb == 0 || size == 0)
            return (NULL);
    ptr = calloc(nmemb, size);

    if (ptr == NULL)
        return (NULL);
    
    return (ptr);
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
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}