#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - entry point
* @min: input
* @max: input
* Description: function
* Return: 0
*/
int *array_range(int min, int max)
{
    int *ptr, i;
    if (min > max)
        return (NULL);
    
    ptr = malloc(sizeof(int) * (max - min+ 1));

    if (ptr == NULL)
        return (NULL);
    for (i = 0; min <= max; i++)
    {
        ptr[i] = min;
        min++;
    }
        
    
    return (ptr);

}
void simple_print_buffer(int *buffer, unsigned int size)
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
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}