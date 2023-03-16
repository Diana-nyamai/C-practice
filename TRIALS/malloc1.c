#include <stdio.h>

int main()
{
    int i;                /*   memory is automatically reserved size of 4bytes*/
    char j;     /* 1 byte*/
    int *ptr;   /*8 bytes*/
    char arr[3];  /*3 bytes*/

    printf("size of: %d bytes\n", sizeof(i));
    printf("size of: %d bytes\n", sizeof(j));
    printf("size of: %d bytes\n", sizeof(ptr));
    printf("size of: %d bytes\n", sizeof(arr));
}