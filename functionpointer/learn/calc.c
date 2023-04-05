#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}
int main(int argc, char const *argv[])
{
	int (*calculator[])(int, int) = {add, sub, mul};
	int choice, a, b;

	printf("Enter the first number: \n");
	scanf("%d", &a);
	printf("Enter a choice: 0 for add, 1 for sub and 2 for multiplication\n");
	scanf("%d", &choice);
	printf("Enter the second number: \n");
	scanf("%d", &b);

	if (choice > 2) return (0);
	int res = (*calculator[choice])(a, b);

	printf("The result is: %d", res);
	return 0;
}
