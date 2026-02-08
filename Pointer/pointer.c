#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    *p = 20;

    printf("New value of a = %d\n", a);
    return 0;
}
