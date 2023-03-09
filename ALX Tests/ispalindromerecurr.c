#include <stdio.h>
int count_char(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + count_char(s + 1));
}
int palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end] )
        return 0;
    return palindrome_helper(s, start + 1, end - 1);
}
int is_palindrome(char *s)
{
    int len = count_char(s);
    int start = 0;
    return palindrome_helper(s, start, len - 1);
}
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("is_palindrome(\"level\") returned %d\n", r);
    r = is_palindrome("redder");
    printf("is_palindrome(\"redder\") returned %d\n", r);
    r = is_palindrome("test");
    printf("is_palindrome(\"test\") returned %d\n", r);
    r = is_palindrome("step on no pets");
    printf("is_palindrome(\"step on no pets\") returned %d\n", r);

    return (0);
}
