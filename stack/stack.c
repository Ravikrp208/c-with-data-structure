#include<stdio.h>
#include<stdlib.h>

int arr[5], t=-1;
void push();
void pop();

    

int main() {
    int c ;

    while (1)   
    {
        printf("1. Push\n 2. Pop\n 3. Display\n 4. Exit\n");
        scanf("%d", &c);

        switch (c)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

 void push() 
 {

    if (t<4)
    {
        t=t+1;
        printf("Enter the element to push: ");
        scanf("%d", &arr[t]);
    }  
    else 
    {
        printf("stack is full\n:");
    }    
}

void pop() 
{
    if (t==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("the popped element is %d\n", arr[t]);
        t=t-1;  
    }
}

