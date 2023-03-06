#include  <stdio.h>

void multipe_table()
{
    int i, j, res;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            res = j * i;
            if (res / 10 == 0)
                printf("%c", (res/10) + '0');
            printf("%d, ", res);
        }
        printf("\n");
    }
}
int main()
{
    multipe_table();
    return (0);
}