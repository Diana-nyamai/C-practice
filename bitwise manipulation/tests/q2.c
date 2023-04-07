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

int get_bit(unsigned long int n, unsigned int index)
{
    int size = 32, rem, i = 0, j, k, l = 0;
    int array[size];

    while (n > 0)
    {
        rem = n % 2;
        array[i] = rem;
        n /= 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        int temp = array[l];
        array[l] = array[j];
        array[j] = temp;
        l++;
    }
    for (k = 0; k < i; k++)
    {
        if (k == index)
        {
            return array[k];
            break;
        }
    }
    return (-1);
}