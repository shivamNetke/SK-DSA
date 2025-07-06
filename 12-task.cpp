// find max data

#include <iostream>
#include <malloc.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
};

Node *CreateNode(int value) {
  struct Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = NULL;
  return newNode;
}

void PrintList(Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    cout << "data = " << temp->data << endl;
    temp = temp->next;
  }
}
void FindMaxData(Node *head) {
  int max = head->data;
  Node *temp = head->next;

  while (temp != NULL) {
    if (temp->data > max) {
      max = temp->data;
    }
    temp = temp->next;
  }

  cout << "Maximum value in the list = " << max << endl<<endl;
}

int main() {
  struct Node *head = CreateNode(11);
  PrintList(head);
  cout << endl;

  head->next = CreateNode(22);
  PrintList(head);
  cout << endl;

  head->next->next = CreateNode(33);
  PrintList(head);
  cout << endl;

  head->next->next->next = CreateNode(44);
  PrintList(head);
  cout << endl;

  FindMaxData(head);
  
  head->next->next->next->next = CreateNode(99);
  PrintList(head);
  cout<<endl;

  head->next->next->next->next->next = CreateNode(55);
  PrintList(head);
  cout<<endl;

  FindMaxData(head);

  return 0;
}
