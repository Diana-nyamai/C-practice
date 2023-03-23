#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int max(int args_size, ...);
int main(void)
{
    int x = max(4, 60,30,5,50);
    printf("max is: %d\n ", x);
    return (0);
}

int max(int args_size, ...)
{
    va_list args;
    va_start(args, args_size);
    int i;
    int max = 0;

    for (i = 0; i < args_size; i++)
    {
        int a = va_arg(args, int);
        
        if (a > max)
            max = a;
    }
    va_end(args);

    return (max);
}