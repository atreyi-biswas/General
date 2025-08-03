#include <stdio.h>

// A simple function
void sayHello() {
    printf("Hello!\n");
}

int main() {
    // Declare a function pointer
    void (*ptr)() = sayHello;

    // Call the function using the pointer
    ptr();

    return 0;
}


