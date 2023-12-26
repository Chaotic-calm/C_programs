#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

// Function to display all elements in a linked list
void displayList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

int main() {
    
    struct Node* head = NULL;

    head = createNode(3);
    head->next = createNode(7);
    head->next->next = createNode(11);

    printf("Linked list elements: ");
    displayList(head);

    return 0;
}
