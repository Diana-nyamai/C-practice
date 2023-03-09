#include <stdio.h>
int isprime(n, val)
{
    if (n % val == 0)
    {
        if (n == val)
            return 1;
        else
            return 0;
    }
    return isprime(n, val + 1);
}

int is_prime_number(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 0;
    if (n < 0)
        return 0;
    return isprime(n, 2);
}
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}