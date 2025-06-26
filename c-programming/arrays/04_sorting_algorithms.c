#include <stdio.h>


void bubbleSort(int a[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1]) {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
}


void selectionSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        int t = a[min];
        a[min] = a[i];
        a[i] = t;
    }
}


void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int arr1[] = {5, 3, 8, 6, 2};
    int arr2[] = {5, 3, 8, 6, 2};
    int arr3[] = {5, 3, 8, 6, 2};
    int n = 5;

    printf("Bubble Sort: ");
    bubbleSort(arr1, n);
    display(arr1, n);

    printf("Selection Sort: ");
    selectionSort(arr2, n);
    display(arr2, n);

    printf("Insertion Sort: ");
    insertionSort(arr3, n);
    display(arr3, n);

    return 0;
}

