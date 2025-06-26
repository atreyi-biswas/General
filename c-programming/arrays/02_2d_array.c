#include <stdio.h>

int main() {
    int matrix[2][2], sum = 0;

    printf("Enter 2x2 matrix elements:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }

    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}

