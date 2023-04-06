#include <stdio.h>

int main(int argc, char const *argv[])
{
    int bi = ~ 0x12;
    printf("binary: %d\n", bi);

    int shift = 0x13 << 1;
    printf("AND: OX%x", shift);
    return 0;
}
