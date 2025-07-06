// delete at end
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

void *deleteAtEnd(struct node *head)
{
    struct node *current = head;
    while (current->nextAdd->nextAdd != NULL)
    {
        current = current->nextAdd;

    }

    struct node *temp = current->nextAdd;
    if(temp != NULL)
    {
        free(temp);
    }

    current->nextAdd = 0;

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

  deleteAtEnd(head);

  printSLL(head);

  return 0;
}