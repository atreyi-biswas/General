#include <stdio.h>

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int sumArray(int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += a[i];
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Array elements: ");
    printArray(arr, size);

    int sum = sumArray(arr, size);
    printf("Sum = %d\n", sum);

    return 0;
}

