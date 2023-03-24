#include <stdio.h>

int main()
{
    int n = 10, i;

    if (n <= 0)
        printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("-");
    }
    printf("\n");
}