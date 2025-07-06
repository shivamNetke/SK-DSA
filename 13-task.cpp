// find min data

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
void FindMinData(Node *head) {
  int min = head->data;
  Node *temp = head->next;

  while (temp != NULL) {
    if (temp->data < min) {
      min = temp->data;
    }
    temp = temp->next;
  }

  cout << "Minimum value in the list = " << min << endl<<endl;
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

  FindMinData(head);
  
  head->next->next->next->next = CreateNode(99);
  PrintList(head);
  cout<<endl;
                                            
  
  head->next->next->next->next->next = CreateNode(55);
  PrintList(head);
  cout<<endl;

  FindMinData(head);

  head->next->next->next->next->next->next = CreateNode(5);
  PrintList(head);
  cout<<endl;

  FindMinData(head); 

  head->next->next->next->next->next->next->next = CreateNode(-5);
  PrintList(head);
  cout << "" << endl;

  
  FindMinData(head);

  return 0;
}
