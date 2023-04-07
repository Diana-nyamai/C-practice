#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
/**
* binary_to_uint - entry point
* @b: input
* Return: 0
*/
unsigned int binary_to_uint(const char *b)
{
    unsigned int sum = 0, i, len = 0, j;

    if (b == 0)
        return (0);
    
    while (b[len] != '\0')
        len++;

    j = len - 1;
    for (i = 0; i < len; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        
        // convert the char to integer by subtracting 0 from the char
        sum += (b[i] - '0') << j;
        j--;
    }
    return (sum);
}