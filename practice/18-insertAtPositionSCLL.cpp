// insert at position in singly circular linked list 

#include <iostream>
#include <malloc.h>

using namespace std;

struct node {
  int data;
  struct node *nextaddr;
};

struct node *createNode(int data) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = data;
  newnode->nextaddr = NULL;

  return newnode;
}

void printSCLL(struct node *head) {

  cout << "" << endl;
  struct node *current = head;

  do {
    cout << current->data << " ";
    current = current->nextaddr;
  } while (current != head);

  cout << "" << endl;
}

struct node *deleteAtBeginning(struct node *head)
{
    struct node *current = head;
    
    struct node *tempnode = head->nextaddr;
    current->nextaddr = current->nextaddr->nextaddr;
    current->data = tempnode->data;

    if (tempnode != NULL)
    {
        free(tempnode);
    }

    return current;

}

void insertAtPosition(struct node *head, int position, int data)
{
    struct node *current = head;
    for (int i = 1; i < position-1; i++)
    {
      current = current->nextaddr;
    }
    struct node *newnode = createNode(data);

    newnode->nextaddr = current->nextaddr->nextaddr;
    current->nextaddr = newnode;
}

int main() {
  struct node *first = createNode(10);
  struct node *second = createNode(20);
  struct node *third = createNode(30);
  struct node *forth = createNode(40);

  first->nextaddr = second;
  second->nextaddr = third;
  third->nextaddr = forth;
  forth->nextaddr = first;

  struct node *head = first;
  printSCLL(head);

  insertAtPosition(head, 3, 99);

  printSCLL(head);


  return 0;
}