#include <stdio.h>

int main() {
    int a = 87;
    float b = 4.5;

    int *p1 = &a;
    float *p2 = &b;

    printf("Address of a = %p\n", &a);
    printf("Address of b = %p\n", &b);

    printf("Value of p1 (address of a) = %p\n", p1);
    printf("Value of p2 (address of b) = %p\n", p2);

    printf("Value of a using pointer = %d\n", *p1);
    printf("Value of b using pointer = %.1f\n", *p2);

    return 0;
}
