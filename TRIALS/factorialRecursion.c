#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main(int argc, char const *argv[])
{
    int n = 5;
    printf("%d ", factorial(n));
    return 0;
}
