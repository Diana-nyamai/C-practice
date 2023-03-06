#include <stdio.h>

char *_strpbrk(char *s, char *accept);

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

char *_strpbrk(char *s, char *accept)
{
    int i = 0, j;

    while (s[i] != '\0')
    {
        j = 0;

        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                return (&s[i]);
            }
            j++;
        }
    i++;
    }

    return ('\0');
    
}