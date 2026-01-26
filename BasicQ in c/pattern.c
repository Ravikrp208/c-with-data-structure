#include<stdio.h>
#include<math.h>
int main(){
    int n=5,i,isprime=1;
    if(n<=1){
        isprime=0;
    }
    else{
        for(i=2;i<=n-1;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("yes");
    }
    else{
        printf("no");
    }
 
   
}





/* print a character value print (a,b,c...)
 
#include<stdio.h>
int main(){
    int ch='a';
    for(int i=1; i<=5; i++){
        for (int j=1; j<=i; j++){
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
    */