// delete at position
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

void DeleteAtPosition(Node *&head, int pos) {

  if (pos == 1) {
    struct Node *temp = head;
    head = head->next;
    free(temp);
    temp = NULL;
    return;
  }

  struct Node *current = head;
  for (int i = 1; i < pos - 1; i++) {
    current = current->next;
  }

  struct Node *temp = current->next;
  current->next = temp->next;
  free(temp);
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

  int position = 3;
  DeleteAtPosition(head, position);

  cout << "\nAfter Deleting at Position " << position << ":\n";
  PrintList(head);

  return 0;
}
