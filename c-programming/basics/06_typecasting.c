#include <stdio.h>

int main() {
    int i = 18, j = 9;
    float result;

    // Implicit conversion
    result = i / j; 
    printf("Without typecasting: %f\n", result);

    // Explicit conversion
    result = (float)i / j;
    printf("With typecasting: %f\n", result);

    return 0;
}
