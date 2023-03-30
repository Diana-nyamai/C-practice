#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int *mul(int c, int d)
{
    return c * d;
}
int main(void)
{
    int res;
    int (*ptr)(int, int) = &add;
    res = ptr(10, 3);
    printf("add: %d\n", res);

    int *res2;
    res2 = mul(3, 4);
    printf("mul: %d\n", res2);
    return (0);
}