#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    float avg;

    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / 5;

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

