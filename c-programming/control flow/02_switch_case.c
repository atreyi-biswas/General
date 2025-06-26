#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        switch (str[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++;
                break;
        }
        i++;
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}

