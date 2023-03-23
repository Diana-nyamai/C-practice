#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print(char *placeholders, ...);
int main(void)
{
    print("ddff", 10, 20, 20.3, 13.4);
    return (0);
}

void print(char *placeholders, ...)
{
    int len = strlen(placeholders);
    va_list args;
    va_start(args, placeholders);
    int i;

    for (i = 0; i < len; i++)
    {
        if (placeholders[i] == 'd')
        {
            int x = va_arg(args, int);
            printf("%d\n", x);
        }
            
        else if (placeholders[i] == 'f')
        {
            double y = va_arg(args, double);
            printf("%02f\n", y);
        }
            
    }
    va_end(args);
}