// insertion at beginning using data swapping

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
  if (head == NULL) return;
  struct node *current = head;

  do {
    cout << current->data << " ";
    current = current->nextaddr;
  } while (current != head);

  cout << "" << endl;
}

struct node *insertAtBeginSCLL(struct node *head, int data) {

  struct node *newnode = createNode(data);

  newnode->nextaddr = head->nextaddr;
  head->nextaddr = newnode;

  int temp = head->data;
  head->data = newnode->data;
  newnode->data = temp;

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

  head = insertAtBeginSCLL(head, 99);

  printSCLL(head);

  return 0;
}
