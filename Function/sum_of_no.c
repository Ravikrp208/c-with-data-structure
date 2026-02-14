#include <stdio.h>

// Function to calculate sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d %d", &a,&b);

   sum = a+b;

    printf("Sum of two numbers = %d\n", sum);

    return 0;
}