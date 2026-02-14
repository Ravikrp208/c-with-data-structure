#include <stdio.h>

// Function to print pattern
void printPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter number of no: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}