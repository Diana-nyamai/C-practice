#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a;

    a = malloc(sizeof(char) * 3);
    a[0] = 'H';
    a[1] = 'i';
    a[2] = '\0';

    printf("%s\n", a);
}