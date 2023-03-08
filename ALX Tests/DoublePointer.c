#include <stdio.h>

void set_string(char **s, char *to);

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s1 = "Robert Allen";
    char *s0 = "Bob Dylan";
    

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}

void set_string(char **s, char *to)
{
    *s = to;
}