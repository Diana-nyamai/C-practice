#include <stdio.h>

unsigned int _strspn(char *s, char *accept);

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0, j, sum = 0;

    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                sum += 1;
                break;
            }
            j++;
        }
        if (accept[j] == '\0')
            break;
        i++;
    }
    return (sum);
}