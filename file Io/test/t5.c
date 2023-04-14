#include <stdio.h>

struct data
{
    int n1;
    int n2;
    int n3;
};
int main(int argc, char const *argv[])
 {
    struct data d;
    FILE *fp;
    int i;
    fp = fopen("t5.bin", "wb");
    if (fp == NULL)
        printf("Failed to open/create file");
    
    for (i = 1; i < 5; i++)
    {
        d.n1 = i;
        d.n2 = 2 * i;
        d.n3 = 2 * i + 1;
        fwrite(&d, sizeof(struct data), 1, fp);
    }
    fclose(fp);
    return 0;
 }
 