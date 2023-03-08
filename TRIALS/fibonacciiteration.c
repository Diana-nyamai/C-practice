#include <stdio.h>

int fibonacci(int n) {
    int prev1 = 0, prev2 = 1, curr = 0;
    int i;

    if (n == 0)
        return prev1;
    else if (n == 1)
        return prev2;

    for (i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    return curr;
}

int main() {
    int n = 5; // change this to the desired number of Fibonacci numbers
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}