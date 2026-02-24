#include <stdio.h>
#include <stdlib.h>

// structure of node
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Insert at beginning
void insertBeg(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL) {
        printf("Memory not allocated\n");
        return;
    }

    newNode->data = value;
    newNode->next = head;
    head = newNode;

    printf("Node inserted at beginning\n");
}

// Delete from beginning
void deltbeg() {
    struct node *temp;

    if(head == NULL) {
        printf("No node found (List is empty)\n");
    } else {
        temp = head;
        head = head->next;
        free(temp);
        printf("Node deleted from beginning\n");
    }
}

// Display list
void display() {
    struct node *temp = head;

    if(temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, value;

    while(1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Delete from Beginning\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertBeg(value);
                break;

            case 2:
                deltbeg();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}