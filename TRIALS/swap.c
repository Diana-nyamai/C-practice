#include <stdio.h>

int swapping(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
int main()
{
    /* code */
    int i, j;

    i = 10;
    j = 20;

    printf("val i: %d val j: %d\n", i, j);
    swapping(&i, &j);
    
    printf("val i: %d val j: %d", i, j);
    return 0;
}
