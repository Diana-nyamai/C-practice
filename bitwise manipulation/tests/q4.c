#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
/**
* clear_bit - entry point
* @n: input
* @index: input
* Return: 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= 32)
        return (-1);

    *n &= ~(1UL << index);
    return (0);
}