#include<stdio.h>
int main ()
{
    int arr [3] [3] , i , j;
    int sum = 0;

  // input ke liye
    printf("Enter a elements:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",& arr[i][j]);
        }
    }

    //display ke liye

    for(i =0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            // if (i<j)
            // {
            //  printf("%d ",arr[i] [j]);   
            // }
            
            sum = sum + arr [i][j] ;
        }
       

    }
    printf("sum = %d ",sum);

    return 0;
}