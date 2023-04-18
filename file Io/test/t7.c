// fseek concept
#include <stdio.h>
#include <stdlib.h>

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
    {
         printf("failed to open file");
         exit(1);
    }
       
    
    fseek(fl, -(long int)sizeof(struct data), SEEK_SET);

    for (i = 1; i < 5; i++)
    {
        fread(&d, sizeof(struct data), 1, fl);
        printf("n1: %d\t n2: %d\t n3: %d \n", d.n1, d.n2, d.n3);
        fseek(fl, -(long int)(2*sizeof(struct data)), SEEK_CUR);

    }
    fclose(fl);
    return 0;
}
