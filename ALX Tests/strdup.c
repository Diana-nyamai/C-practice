#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
    char *dup;
    int sl = 0, i;

    if (str == NULL)
        return (NULL);
    
    while (str[sl] != '\0')
        sl++;
    
    dup = malloc(sizeof(char) * sl);
    
    if (dup == NULL)
        return (NULL);

    for (i = 0; i < sl; i++)
    {
        dup[i] = str[i];
    }

    return (dup);
}
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}