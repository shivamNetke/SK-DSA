// insert at beginning in doubly linked list
#include <iostream>
#include<malloc.h>

using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *createDLL(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->prev = NULL;
    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}

void printDLL(struct node *head)
{   
    cout << "" << endl;
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

struct node *insertAtBeginningDLL(struct node *head, int data)
{
    struct node *current = head;
    struct node *newnode = createDLL(data);

    current->prev = newnode;
    newnode->next = head;
    return newnode;
}

int main()
{
    struct node *first = createDLL(10);
    struct node *head = first;
    struct node *second = createDLL(20);
    struct node *third = createDLL(30);

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    printDLL(head);

    struct node *forth = createDLL(40);
    third->next = forth;
    forth->prev = third;

    printDLL(head);

    head = insertAtBeginningDLL(head, 90);
    
    printDLL(head);


    return 0;
}