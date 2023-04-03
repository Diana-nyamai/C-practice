#include <stdio.h>

typedef struct userdetails
{
    char *name;
    int age;

} user;
int main(void)
{
    user user_d = {"diana", 24};
    printf("username: %s\nage: %d", user_d.name, user_d.age);

    return (0);
}