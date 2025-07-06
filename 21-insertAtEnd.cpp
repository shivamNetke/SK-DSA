// insert at end
#include <iostream>
#include <malloc.h>

using namespace std;

struct node {
  int data;
  struct node *nextAdd;
};

struct node *createNode(int data) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = data;
  newnode->nextAdd = NULL;

  return newnode;
}

void printSLL(struct node *head) {
  cout << "\nin printSLL\n" << endl;
  struct node *current = head;
  while (current != NULL) {
    cout << " " << current->data << endl;
    current = current->nextAdd;
  }
  cout << "\nout printSLL\n" << endl;
}

struct node *insertAtEnd(struct node *head, int data) {
  struct node *newnode = createNode(data);
  struct node *current = head;
  while (current->nextAdd != NULL) {
    current = current->nextAdd;
  }
  current->nextAdd = newnode;
  return newnode;
}

int main() {
  // creating a head pointer to point at start of the node
  struct node *head;
  struct node *first = createNode(10);
  head = first;

  printSLL(head);

  struct node *second = createNode(20);
  first->nextAdd = second;

  printSLL(head);

  struct node *third = createNode(30);
  second->nextAdd = third;

  printSLL(head);

  struct node *forth = insertAtEnd(head, 99);

  printSLL(head);

  return 0;
}