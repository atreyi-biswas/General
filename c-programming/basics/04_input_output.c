#include <stdio.h>

int main() {
    int age;
    float gpa;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("\nHello, %s!\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);

    return 0;
}
