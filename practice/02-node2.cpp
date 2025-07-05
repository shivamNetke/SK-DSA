#include <iostream>
#include<malloc.h>

using namespace std;

struct node {
  int data;
  struct Node *nextAdd;
};

int main() {
//   creating new node on heap 
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = 10;
  newnode->nextAdd = 0;
  cout << "data = " <<newnode->data<< endl;
  cout << "nextadd = " <<newnode->nextAdd<< endl;
  return 0;
}