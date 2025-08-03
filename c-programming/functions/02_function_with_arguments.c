#include <stdio.h>

// Function definition with arguments
void add(int x, int y) {
    int sum = x + y;
    printf("Sum of %d and %d is %d\n", x, y, sum);
}

int main() {
    add(5, 7);  // call with arguments
    add(10, 20); // another call with different arguments
    return 0;
}

