#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, num, isprime;
    
    for (num = 2; num <=20; num++)
    {
        isprime = 1;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
            printf("%d, ", num);
    }
    return 0;
}
