#include <stdio.h>

// function to calculate the sum of elements in an array
int sumArray(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

// main function to test the sumArray function
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    int result = sumArray(arr, size);

    printf("Sum of array elements: %d", result);

    return 0;
}