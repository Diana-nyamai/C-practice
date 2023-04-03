#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User
{
    char *name;
    int age;
};

struct User *Newuser(char *name, int age)
{
    struct User *user;

    user = malloc(sizeof(struct User));
    if (user == NULL)
    {
        printf("error occured while allocating memory");
        return NULL;
    }

    user->name = malloc(strlen(name) + 1);
    if (user->name ==   NULL)
    {
        printf("error occured while allocating memory");
        free(user);
        return NULL;
    }
        
    strcpy(user->name, name);
    user->age = age;
    return user;
}
int main(void)
{
    struct User *user;

    user = Newuser("ndinda", 24);
    printf("%s %d\n", user->name, user->age);
    
    free(user->name);
    free(user);
    return (0);
}