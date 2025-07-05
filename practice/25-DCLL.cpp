// doubly circular linked list

#include <iostream>
#include<malloc.h>

using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *createNode(int data)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));

  newnode->prev = NULL;
  newnode->data = data;
  newnode->next = NULL;

  return newnode;
}

void printDCLL(struct node *head)
{
  struct node *current = head;
  
  do{
    cout << current->data << endl;
    current = current->next;
  }while(current != head);
}

int main()
{
  struct node *first = createNode(10);
  struct node *second = createNode(20);
  struct node *third = createNode(30);

  struct node *head = first;

  first->prev = third;
  first->next = second;

  second->prev = first;
  second->next = third;

  third->prev = second;
  third->next = first;

  printDCLL(head);

  return 0;
}