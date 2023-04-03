#include <stdio.h>

typedef struct housing
{
    char *name;
    char *location;
} Housing;

int main(void)
{
    Housing house = {"unity homes", "kiambu"};
    printf("Housing name:%s location:%s", house.name, house.location);

    return (0);
}