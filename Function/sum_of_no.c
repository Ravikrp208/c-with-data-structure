// #include <stdio.h>

// // Function to calculate sum
// int sum(int a, int b) {
//     return a + b;
// }

// int main() {
//     int a, b, sum;

//     printf("Enter first number: ");
//     scanf("%d %d", &a,&b);

//    sum = a+b;

//     printf("Sum of two numbers = %d\n", sum);

//     return 0;
// }

#include <stdio.h>

void factorial(int n) {
    
      int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d =%d", n,fact);
}

int main() {


    factorial(5);

    return 0;
}
