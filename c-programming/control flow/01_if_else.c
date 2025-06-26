#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("It is a Positive number\n");
    else if (num < 0)
        printf("It is a Negative number\n");
    else
        printf("The number is Zero\n");

    return 0;
}

