#include <stdio.h>

struct housing
{
    char *name;
    char *location;
} housing;

int main(void)
{
    housing = (struct housing) {"Tatu city", "kiambu road"};

    printf("housing name: %s location: %s", housing.name, housing.location);

    return (0);
}