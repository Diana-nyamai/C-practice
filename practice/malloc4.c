#include <stdio.h>
#include <stdlib.h>

void sum(int a, int b, int c)
{
    int *num;

    num = malloc(sizeof(*num) * 3);
    num[0] = a;
    num[1] = b;
    num[2] = c;  
    int sum = num[0] + num[1] + num[2];

    printf("sum is: %d\n", sum);
    free(num);
}
int main()
{
    sum(8, 8, 8);

    return (0);
}