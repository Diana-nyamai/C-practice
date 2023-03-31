#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int main(void)
{
    int res;
    int (*ptr)(int, int) = &add;
    res = ptr(10, 3);
    printf("add: %d\n", res);
}