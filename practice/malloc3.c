#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num;

    num = malloc(sizeof(int) * 3);
    num[0] = 7;
    num[1] = 6;
    num[2] = 5;

    printf("%d, %d, %d\n", num[0], num[1], num[2]);
    
    return (0);
}