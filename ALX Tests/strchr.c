#include <stdio.h>

char *_strchr(char *s, char c);

int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

char *_strchr(char *s, char c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
           return (&s[i]);
        }
        i++;
       
    } 
     if (s[i] == c)
        {
            return (&s[i]);
        }
    return NULL;
}