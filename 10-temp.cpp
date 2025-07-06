// 01 Singly Linked List

#include <malloc.h>
#include <stdio.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *CreateNode(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

void PrintSinglyLL(struct Node *head) {
  struct Node *current = head;

  while (current != NULL) {
    printf("data = %d\n", current->data);
    current = current->next;
  }
}

struct Node *InsertAtBeginning(struct Node *head, int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = head;

  return newNode;
}

struct Node *DeleteAtBeginning(struct Node *head) {
  struct Node *tempNode = head;
  head = head->next;

  free(tempNode);
  tempNode = NULL;

  return head;
}

void InsertAtEnd(struct Node *head, int data) {
  struct Node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = 0;

  current->next = newNode;
}

void DeleteAtEnd(struct Node *head) {
  struct Node *current = head;
  while (current->next->next != NULL) {
    current = current->next;
  }

  struct Node *tempNode = current->next;
  free(tempNode);
  tempNode = NULL;

  current->next = 0;
}

void SearchData(struct Node *head, int data) {
  struct Node *current = head;

  while (current != NULL) {
    if (current->data == data) {
      printf("Data %d Found\n", data);
      return;
    }

    current = current->next;
  }

  printf("Data %d Not Found\n", data);
}

void InsertAtPosition(struct Node *head, int data, int pos) {
  struct Node *current = head;

  for (int iCnt = 1; iCnt < pos - 1; iCnt++) {
    current = current->next;
  }

  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = current->next;

  current->next = newNode;
}

void DeleteNodeAtData(struct Node *head, int data) {
  struct Node *current = head;

  while (current->next->data != data) {
    current = current->next;
  }

  if (current == NULL) {
    printf("Data Not Found\n");
    return;
  }

  struct Node *temp = current->next;
  current->next = current->next->next;

  free(temp);
  temp = NULL;
}

int main() {
  // Stack
  /*
  struct Node temp;
  struct Node n;
  n.data = 10;
  n.next = &temp;
  */

  // Heap
  /*
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = 20;
  temp->next = NULL;

  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head->data = 10;
  head->next = temp;
  */

  struct Node *head = CreateNode(10);
  printf("head data = %d\n", head->data); // 10

  printf("head next = %p\n", head->next); // 0

  head->next = CreateNode(20);

  printf("head->next = %p\n", head->next); // address of 20 data node
  printf("head->next->data = %d\n", head->next->data); // 20
  printf("head->next->next = %p\n", head->next->next); // 0

  head->next->next = CreateNode(30);

  printf("head->next->next = %p\n",
         head->next->next); // address of 30 data node
  printf("head->next->next->data = %d\n", head->next->next->data); // 30
  printf("head->next->next->next = %p\n", head->next->next->next); // 0

  printf("\n-------------------\n");

  PrintSinglyLL(head);

  head = InsertAtBeginning(head, 99);

  printf("\n-------------------\n");

  PrintSinglyLL(head);

  printf("\n-------------------\n");

  head = DeleteAtBeginning(head);

  printf("\n-------------------\n");

  PrintSinglyLL(head);

  printf("\n-------------------\n");

  DeleteAtEnd(head);

  printf("\n-------------------\n");

  PrintSinglyLL(head);

  printf("\n-------------------\n");

  InsertAtEnd(head, 99);

  printf("\n-------------------\n");

  PrintSinglyLL(head);

  printf("\n-------------------\n");

  SearchData(head, 20);

  printf("\n-------------------\n");

  SearchData(head, 30);

  printf("\n-------------------\n");

  InsertAtPosition(head, 55, 2);

  printf("\n-------------------\n");

  PrintSinglyLL(head);

  return 0;
}