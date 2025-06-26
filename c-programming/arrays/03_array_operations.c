#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5, pos, val, key;

  
    printf("Insert value: ");
    scanf("%d", &val);
    printf("Insert position (0-%d): ", n);
    scanf("%d", &pos);
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;


    printf("Delete position (0-%d): ", n - 1);
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;


    printf("Enter value to search: ");
    scanf("%d", &key);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Not found\n");

 
    printf("Final array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

