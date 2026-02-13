// #include <stdio.h>

// int main() {
//     int i, arr[5];   // declare array of size 5
   

//     // input elements
//     printf("Enter 5 elements:\n");
//     for(i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // display elements12
//     for(i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int arr [2][3];
    // input 

    printf("Enter 2 x 3 matrix");

    for(int i =0; i<2; i++)
    {
      for(int j=0; j<3; j++)
      {
        scanf("%d",&arr[i][j]);
      }
    }

    // display

    for(int i =0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}