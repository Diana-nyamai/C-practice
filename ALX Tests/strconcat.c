#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    char *concat;
    int l1, l2;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    
    while (s1[l1] != '\0')
        l1++;
    while (s2[l2] != '\0')
        l2++;
    
    concat = malloc(sizeof(char) * (l1 + l2 + 1));
    if (concat == NULL)
        return (NULL);
    
    int i = 0;
    while (i < l1)
    {
         concat[i] = s1[i];
        i++;
    }
       

    int j = 0;
    while (j < l2)
    {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    return (concat);
}
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}