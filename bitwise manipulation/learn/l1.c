#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 7, y = 7;

    if (x&y)
        printf("%d\n", 1);
    if (x&&y)
        printf("%d\n", 1);
    
    int shiftleft = 3 << 1;
    printf("left shift is: %d\n", shiftleft);

    int rightshift = 3 >> 4;
    printf("right shift is: %d\n", rightshift);

    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("xor a: %d  xor b: %d\n", a, b);
    return 0;
}
