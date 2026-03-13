#include<stdio.h>
#include<stdlib.h>

int arr[5] ={12, 34, 45, 67, 23};
int item, i = 0;

int main()
{
    printf("Enter search element: ");
    scanf("%d", &item);

    while(i < 5)
    {
        if(arr[i] == item)
        {
            printf(" %d ", i);
            exit(0);
        }
        i++;
    }

    printf("Element not found in the array");
    return 0;
}