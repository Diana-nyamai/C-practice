#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}

/**
* print_binary - entry point
* @n: input
* Return: 0
*/
void print_binary(unsigned long int n)
{
    int b = sizeof(unsigned long int) * 8, i;
    int post = 0;

    for (i = b - 1; i >= 0; i--) 
    {
        unsigned long int m = 1UL << i;
        if ((n & m) == m) 
        {
            putchar('1');
            post = 1;
        } 
        else if (post == 1) 
        { 
            putchar('0');
        }
    }

    if (post == 0) 
    {
        putchar('0');
    }

    // putchar('\n');
}