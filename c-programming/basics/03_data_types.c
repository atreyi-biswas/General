#include <stdio.h>

int main() {
    // Integer types
    int a = 10;
    short int b = 20;
    long int c = 30000;
    unsigned int d = 40;

    // Floating point types
    float e = 3.14f;
    double f = 3.1415926535;

    // Character type
    char g = 'A';

    // Display values
    printf("int: %d\n", a);
    printf("short int: %d\n", b);
    printf("long int: %ld\n", c);
    printf("unsigned int: %u\n", d);

    printf("float: %.2f\n", e);
    printf("double: %.10f\n", f);

    printf("char: %c\n", g);

    return 0;
}

