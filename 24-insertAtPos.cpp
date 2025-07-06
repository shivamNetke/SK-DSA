// search data
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

void insertAtPos(struct node *head, int data, int position)
{
    struct node *current = head;

    for (int i = 1; i<position-1; i++)
    {
        current= current->nextAdd;
    }

    struct node *newnode = createNode(data);

    newnode->nextAdd = current->nextAdd;
    current->nextAdd = newnode;
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

  insertAtPos(head, 99, 2);

  printSLL(head);

  return 0;
}