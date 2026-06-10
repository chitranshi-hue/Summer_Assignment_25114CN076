#include <stdio.h>

int main() {
    int i, j, n = 5;
    char ch;

    for(i = 1; i <= n; i++) {

        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Ascending characters
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // Descending characters
        for(j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}