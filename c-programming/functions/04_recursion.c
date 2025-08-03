#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // Base case
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num = 5;
    int result = factorial(num);
    
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

