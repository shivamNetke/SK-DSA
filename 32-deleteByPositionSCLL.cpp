// delete at position in singly circular linked list 

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
    // simple way
    struct node *tempnode = head->nextaddr;
    current->nextaddr = current->nextaddr->nextaddr;
    current->data = tempnode->data;

    if (tempnode != NULL)
    {
        free(tempnode);
    }

    return current;

}

void deleteByPosition(struct node *head, int pos)
{
    if(pos == 1)
    {
        deleteAtBeginning(head);
    }
    struct node *current = head;

    for(int i = 1; i<pos -1; i++)
    {
        current = current->nextaddr;
    }
    struct node *tempnode = current->nextaddr;

    current->nextaddr = tempnode->nextaddr;

    if(tempnode != NULL)
    {
        free(tempnode);
    }
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

  deleteByPosition(head, 3);

  printSCLL(head);


  return 0;
}