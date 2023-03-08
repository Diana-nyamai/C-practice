#include <stdio.h>

int _strlen_recursion(char *s)
{
    
    if (*s == '\0')
        return 0;
   
    return  1 + _strlen_recursion(s + 1);      
}
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}