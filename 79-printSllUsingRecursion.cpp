// print singly linked list using recursion

#include <iostream>
using namespace std;
#include <malloc.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *CreateNode(int data)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

void printSinglyLLRecursion(struct Node *head)
{
  if (head == NULL)
  {
    return;
  }

  cout << "recursion data = "<<head->data << endl;
  printSinglyLLRecursion(head->next);
}

int main()
{

  struct Node *head = CreateNode(10);

  head->next = CreateNode(20);

  head->next->next = CreateNode(30);

  cout << "" << endl;

  printSinglyLLRecursion(head);

  return 0;
}