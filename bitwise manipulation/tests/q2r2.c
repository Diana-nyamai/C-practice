#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
/**
* get_bit - entry point
* @n: input
* @index: input
* Return: 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= 32)
        return (-1);
    
    return (n & (1UL << index))? 1 : 0;
}