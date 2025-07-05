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

// Function to print the list
void printDLL(struct Node *head) {
    struct Node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to reverse the DLL by swapping data
struct Node *ReverseDLL(struct Node *head) {
    struct Node *start = head;
    struct Node *end = head;

    int iNodeCount = 1;
    while (end->next != NULL) {
        iNodeCount++;
        end = end->next;
    }

    for (int iCnt = 1; iCnt <= (iNodeCount / 2); iCnt++) {
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
