#include <stdio.h>

int factorial(int n)
{
    int i, sum = 1;

    for (i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return (sum);
}
int main(int argc, char const *argv[])
{
    int n = 5;
    printf("%d", factorial(n));
    return 0;
}
