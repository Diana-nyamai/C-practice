#include <stdio.h>

void rev(int *n, int size);
void print_array(int *arr, int size);

int main()
{
    /* code */
    int arr[] = {3,4,5,6};
    int size = sizeof(arr) / sizeof(int);
    
    print_array(arr, size);
    rev(arr, size);
    print_array(arr, size);

    return 0;
}

void print_array(int *arr, int size)
{
    int i = 0;

    while(i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    
    printf("\n");
}

void rev(int *n, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = n[start];
        n[start] = n[end];
        n[end] = temp;
        start++;
        end--;
    }
}