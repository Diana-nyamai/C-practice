#include <stdio.h>

int add(int a, int b)
{
	int s = a + b;
    printf("The sum is: %d\n", s);
}

int sub(int a, int b)
{
	int s = a - b;
    printf("The sub is: %d\n", s);
}

int mul(int a, int b)
{
	int s = a * b;
    printf("The multiplication is: %d\n", s);
}

int calculator(int (*cal)(int, int), int a, int b)
{
    // int x = a, y = b;
    cal(a, b);
}
int main(int argc, char const *argv[])
{
    int a, b, ch;
    printf("Enter values 1: \n");
    scanf("%d", &a);
    printf("Enter operation: 1 to add, 2 to subtract, 3 to multiply \n");
    scanf("%d", &ch);
    printf("Enter values 2: \n");
    scanf("%d", &b);

    if (ch == 1)
        calculator(add, a, b);
    if (ch == 2)
        calculator(sub, a, b);\
    if (ch == 3)
    calculator(mul, a, b);
    return 0;
}
