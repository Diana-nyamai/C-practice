#include <stdio.h>

int _sqrt(int n, int val)
{
    if (val % (n / val) == 0)
    {
        if (val * (n / val) == n)
            return val;
        else
            return -1;
    }

    return _sqrt(n, val + 1);
}

int _sqrt_recursion(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n < 0)
        return -1;
    return _sqrt(n, 2);
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}