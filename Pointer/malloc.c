#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    // Allocate memory
    p = (int *)malloc(sizeof(int));

    if (p == NULL) {
        printf("Memory not allocated");
        return 0;
    }

    // Store value
    *p = 10;

    printf("Value = %d\n", *p);

    // Free memory
    free(p);

    return 0;
}