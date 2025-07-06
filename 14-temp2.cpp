#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the end
struct Node *insertEnd(struct Node *head, int data) {
    struct Node *newNode = createNode(data);

    if (head == NULL) {
        return newNode;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Function to print the doubly linked list
void printDLL(struct Node *head) {
    struct Node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to reverse the DLL by swapping data using while (start != end)
struct Node *ReverseDLL(struct Node *head) {
    struct Node *start = head;
    struct Node *end = head;

    // Move end to the last node
    while (end->next != NULL) {
        end = end->next;
    }

    while (start != end && start->prev != end) {  // also handles even node count case
        int tempData = start->data;
        start->data = end->data;
        end->data = tempData;

        start = start->next;
        end = end->prev;
    }

    return head;
}

// Main function to test
int main() {
    struct Node *head = NULL;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);

    printf("Original ");
    printDLL(head);

    head = ReverseDLL(head);

    printf("Reversed ");
    printDLL(head);

    return 0;
}
