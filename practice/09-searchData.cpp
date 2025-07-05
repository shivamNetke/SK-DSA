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

void searchData(struct node *head, int data) {

  struct node *current = head;

  if (current->data == data) {
    cout << "data found at beginning" << endl;
  }

  int position = 2;
  while (current != NULL) {
    
    if (current->nextAdd->data == data) {
        
      cout << "data found at address " << position << endl;
      
    }
    position++;

    current = current->nextAdd;
  }
}

int main() {

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

  searchData(head, 20);

  printSLL(head);

  return 0;
}