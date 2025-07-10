#include <iostream>
#include <malloc.h>
using namespace std;

struct node {
  int data;
  struct node *next;
};

struct Stack {
  struct node *node;
};

// creating a stack
struct Stack *createStack() {

  struct Stack *newstack = (struct Stack *)malloc(sizeof(struct Stack));

  if (newstack == NULL) {
    cout << "\nmemory allocation failed\n" << endl;
    return NULL;
  }
  newstack->node = NULL;
  return newstack;
}

int main() {
  //   struct Stack *stack = createStack(10);
  struct Stack *stack = createStack();

  return 0;
}