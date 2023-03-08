#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, char const *argv[])
{
    int n = 6;
    int i = 0;

    // for (i = 0; i < n; i++)
    // {
    //      printf("%d, ", fibonacci(i));
    // }
    
    printf("%d, ", fibonacci(n));
    return 0;
}
