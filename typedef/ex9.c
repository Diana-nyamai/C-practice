#include <stdio.h>

struct housing
{
    char *name;
    char *location;
};

int main(void)
{
    struct housing myhousing = {.name = "tatu city", .location = "kiambu road"};
    printf("%s \t %s", myhousing.name, myhousing.location);

    return(0);
    
}