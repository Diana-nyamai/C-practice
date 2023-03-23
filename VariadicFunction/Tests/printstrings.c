#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list arg;
    char *str;
    
    va_start(arg, n);
    for (i = 0; i < n; i++)
    {
        str = va_arg(arg, char *);
        
        if (str)
        {
            printf("%s", str);
        }
        else
            printf("(nil)");
        
        if (separator && i != n - 1)
            printf("%s", separator);
    }

    va_end(arg);
    printf("\n");
}
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}