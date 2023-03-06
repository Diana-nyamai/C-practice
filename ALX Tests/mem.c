#include <stdio.h>

void simple_print_buffer(char *buffer, unsigned int size);
char *_memset(char *s, char b, unsigned int n);

int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

char *_memset(char *s, char b, unsigned int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}