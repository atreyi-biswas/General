#include <stdio.h>

// Function that returns an integer value
int add(int a, int b) {
    return a + b;  // returns the sum
}

int main() {
    int x = 10, y = 15;
    int result = add(x, y);  // store returned value in "add(a,b)" function

    printf("Result: %d\n", result);

    return 0;
}

