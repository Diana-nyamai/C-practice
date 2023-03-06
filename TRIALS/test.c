#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i = 0;
    int size = 98;
    char buffer[98] = {0x00};
    char b = "0x01";

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
