#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;
    long long *p;

    p = &fact;   // pointer stores address of fact

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        *p = (*p) * i;   // using pointer to calculate factorial
    }

    printf("Factorial of %d = %lld", n, *p);

    return 0;
}
