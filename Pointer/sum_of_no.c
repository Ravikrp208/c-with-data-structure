#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    printf("Enter a two no :");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;

    printf("Sum = %d", *p1 + *p2);
    return 0;
}
