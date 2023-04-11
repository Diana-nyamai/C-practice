#include <stdio.h>
// write a function to find the XOR of numbers between 1 and n
int findxor(int n);
int findxor2(int n);

int main(int argc, char const *argv[])
{
    int n = 7;

    int res = findxor(n);
    printf("Method 1: %d\n", res);
    int findxor2(int n);
    printf("method 2: %d\n", res);
    return 0;
}
int findxor(int n)
{
    // iterate through the numbers
    int i, res = 0;

    if (n == 0)
        return (0);
    for (i = 1; i <= n; i++)
    {
        res ^= i;
    }
   
    return (res);
}

// method 2: efficient
int findxor2(int n)
{
    if (n % 4 == 0)
        return (0);
    if (n % 4 == 1)
        return (1);
    if (n % 4 == 2)
        return (n + 1);
    return (0);
}
