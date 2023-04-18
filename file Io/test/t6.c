#include <stdio.h>

struct data
{
    int n1;
    int n2;
    int n3;
};

int main(int argc, char const *argv[])
{
    int i;
    struct data d;
    FILE *fl;
    
    fl = fopen("t5.bin", "rb");
    if (fl == NULL)
        printf("Failed to open file");
    
    for (i = 1; i < 5; i++)
    {
        fread(&d, sizeof(struct data), 1, fl);
        printf("n1: %d\nn2: %d\nn3: %d\n\n", d.n1, d.n2, d.n3);
    }

    fclose(fl);
    return 0;
}
