#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fl;
    fl = fopen("flename.txt", "w");

    fprintf(fl, "%s", "hello diana");
    fclose(fl);
    return 0;
}
