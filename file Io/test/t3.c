#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    FILE *ptr;
    ptr = fopen("writeinto.txt", "w");

    if (ptr == NULL)
        printf("Error!");
    
    printf("Enter a number: \n");
    scanf("%d", &num);

    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}
