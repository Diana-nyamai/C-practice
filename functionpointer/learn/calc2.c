#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}

int subs(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}


int main(void)
{
    int choice, a = 10, b = 5;
    int (*ptr[])(int, int) = {add, subs, mul};
    
    printf("enter 0 for add, 1 for sub and 2 for multiplication\n");
    scanf("%d", &choice);

    printf("the res is: %d", (ptr[choice])(a, b));
}