#include <stdio.h>

void multiArray(int (*arr)[2]);

int main()
{
    /* code */
    int arr[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};

    multiArray(arr);
    return 0;
}

void multiArray(int (*arr)[2])
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j] );
        }
    }
}
