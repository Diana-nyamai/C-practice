#include <stdio.h>

int main(void)
{
    int a = 8;
    int *p = &a;

    *p = 9;
    printf("%d", a);

    return (0);
}