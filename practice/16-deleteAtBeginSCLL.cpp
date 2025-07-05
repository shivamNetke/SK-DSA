// delete at beginning in singly circular linked list

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
    while (current->nextaddr != head)
    {
        // cout << "current nextaddr in while "<<current->nextaddr << " and data "<<current->data << endl;
        current= current->nextaddr;
    }
    // cout << "out while" << endl;
    // cout << "current nextaddr out while "<<current->nextaddr << " and data "<<current->data<< endl;

    struct node *tempnode = current->nextaddr;

    current->nextaddr = head->nextaddr;

    if(tempnode != NULL)
    {
        free(tempnode);
    }

    head = current->nextaddr;
    return head;
}

int main() {
  struct node *first = createNode(10);
  struct node *second = createNode(20);
  struct node *third = createNode(30);

  first->nextaddr = second;
  second->nextaddr = third;
  third->nextaddr = first;

  struct node *head = first;
  printSCLL(head);

  head = deleteAtBeginning(head);

  printSCLL(head);


  return 0;
}