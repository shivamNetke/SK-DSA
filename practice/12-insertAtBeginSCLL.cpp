// insert at beginning in singly circular linked list

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

struct node *insertAtBeginSCLL(struct node *head, int data) {
  cout << "\nin insertatbegin" << endl;
  struct node *newnode = createNode(data);
  struct node *current = head;

  while (current->nextaddr != head)
   {
    current = current->nextaddr;
  }

  current->nextaddr = newnode;
  newnode->nextaddr = head;

  cout << "out insertatbegin" << endl;
  return newnode;
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

  head = insertAtBeginSCLL(head, 99);

  printSCLL(head);

  return 0;
}