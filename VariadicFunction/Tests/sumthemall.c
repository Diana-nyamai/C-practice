#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list arg;
    va_start(arg, n);
    int i, sum = 0;
    
    if (n == 0) return 0;

    for (i = 0; i < n; i++)
    {
        int x = va_arg(arg, int);
        sum += x;
    }
    return (sum);
}

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}