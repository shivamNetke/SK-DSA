#include <iostream>
#include<malloc.h>

using namespace std;

struct node {
  int data;
  struct node *nextAdd;
};

struct node *createNode(int data){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->nextAdd = NULL;

    return newnode;
}

int main()
{
  // creating a head pointer to point at start of the node
  struct node *head;
  struct node *first = createNode(10);
  head = first;

  cout << "first data = "<<first->data << endl;
  cout << "first nextAdd = "<<first->nextAdd << endl;

  struct node *second = createNode(20);
  cout << "second data = "<<second->data << endl;
  cout << "second nextAdd = "<<second->nextAdd << endl;

  return 0;
}