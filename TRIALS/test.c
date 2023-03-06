#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i = 0;
    int size = 98;
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    for (; i < size; i++)
    {
        if (i % 10 != 0)
            printf(" ");
        else
            printf("\n");
        printf("0x01", buffer[i]);
    }
    printf("\n");
    
    // int x = 8%10;
    // printf("%d", x);
    return 0;
}
