#include <stdio.h>

int main() {
    int num, i, flag = 0;
    int *p = &num;

    printf("Enter a number: ");
    scanf("%d", p);   // using pointer

    if (*p <= 1) {
        printf("Not a Prime number");
        return 0;
    }

    for (i = 2; i <= *p / 2; i++) {
        if (*p % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime number");
    else
        printf("Not a Prime number");

    return 0;
}
