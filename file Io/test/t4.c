#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    FILE *ptr;
    ptr = fopen("writeinto.txt", "r");

    if (ptr == NULL)
        printf("Error while opening file!");
    
    fscanf(ptr, "%d", &num);

    printf("value is: %d", num);
    fclose(ptr);
    return 0;
}
