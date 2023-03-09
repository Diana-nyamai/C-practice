#include <stdio.h>

int is_palindrome(char *s){
    char *t = s;
    int i = 0,j;
    
    while (t[i] != '\0')
        i++;
    for (j = i - 1; j >= 0; j--)
    {
        if(*s != *(t+j))
            return 0;
        s++;
    }
    return 1;

}
int main(int argc, char const *argv[])
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return 0;
}
