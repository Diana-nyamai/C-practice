#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - entry point
* @s1: input
* @s2: input
* @n: input
* Description: function
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";

    unsigned int s1len = 0, s2len = 0;

    while (s1[s1len] != '\0')
    {
        s1len++;
    }
    while (s2[s2len] != '\0')
    {
        s2len++;
    }
    
    char *newMem;
    newMem = malloc(s1len + n + 1);

    if (n >= s2len)
        n = s2len;
    
    if (newMem == NULL)
        return (NULL);

    int i = 0,j = 0;
    
    while (s1[i] != '\0')
    {
        newMem[i] = s1[i];
        i++;
    }

    while (j < n && s2[j] != '\0' )
    {
        newMem[i] = s2[j];
        i++;
        j++;
    }
    newMem[i] = '\0';
    return (newMem);
    
}
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}