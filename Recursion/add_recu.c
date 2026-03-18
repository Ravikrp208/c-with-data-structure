#include <stdio.h>

void printArray(int arr[], int n, int i) {
    if (i == n)   // Base case
        return;

    printf("%d ", arr[i]);
    printArray(arr, n, i + 1); // Recursive call
}

int main() {
    int arr[] = {10, 20, 30, 40};
    printArray(arr, 4, 0);
    return 0;
}