#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list arg;
    va_start(arg, n);

    unsigned int i;

    for (i = 0; i < n; i++)
    {
        int x = va_arg(arg, int);
        printf("%d", x);

        if (separator && i != n -1)
            printf("%s", separator);
    }
    va_end(arg);
}
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}