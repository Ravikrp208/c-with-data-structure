#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int i, value;

    // Create 5 nodes
    for (i = 1; i <= 5; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;      // first node
            temp = newNode;
        } else {
            temp->next = newNode; // link nodes
            temp = newNode;
        }
    }

    // Display linked list
    temp = head;
    printf("\nSingly Linked List:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}