#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 3)
            continue;  // Skip iteration when i is 3
        if (i == 6)
            break;     // Exit loop when i is 6
        printf("%d ", i);
    }
    return 0;
}

