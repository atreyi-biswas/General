#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Arithmetic operations
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    // Relational operations
    printf("a > b: %d\n", a > b);  
    printf("a == b: %d\n", a == b);

    // Logical operations
    printf("(a > 5 && b < 10): %d\n", (a > 5 && b < 10));  //a>5 and b<10
    printf("(a < 5 || b < 10): %d\n", (a < 5 || b < 10));  //a<5 or b<10
    printf("!(a == b): %d\n", !(a == b));

    return 0;
}
