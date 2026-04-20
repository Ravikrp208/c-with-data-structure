#include<stdio.h>
int main(){
    int arr[]={20,36,47,48,99};
    int i,largest,seclargest;
    largest=arr[0];
    seclargest=arr[0];
    for(i=1;i<5;i++){

        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
        else if (arr[i]>seclargest && arr[i]!=largest){
            seclargest=arr[i];
        }
    } 
    printf("second largest is %d",seclargest);
    return 0; 
    
}