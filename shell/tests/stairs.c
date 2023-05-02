#include "main.h"

/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
    int i,j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            _putchar('*');
        }
        _putchar('\n');
    }
    return (0);
}