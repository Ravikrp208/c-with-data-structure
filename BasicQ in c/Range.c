#include <stdio.h>

int main() {
    int n, i, isPrime;

    printf("Prime numbers from 1 to 100 are:\n");

    for(n = 2; n <= 100; n++) {
        isPrime = 1;   // assume prime

        for(i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }

       if (isPrime == 1) {
            printf("%d ", n);
        }
    }

    return 0;
}
