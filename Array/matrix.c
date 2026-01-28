#include <stdio.h>

int main() {
    int a[4], i;

    printf("Enter 4 elements of matrix:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }

    printf("Matrix form:\n");
    for(i = 0; i < 4; i++) {
        printf("%d ", a[i]);

        if ((i + 1) % 2 == 0)  // new line after 2 elements
            printf("\n");
    }

    return 0;
}
