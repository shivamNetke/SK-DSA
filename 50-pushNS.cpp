#include <iostream>
#include <malloc.h>

using namespace std;

struct Stack {
  struct Node *node;
};

struct Node {
  int data;
  struct Node *next;
};

// createNode

struct Stack *createStack() {
  struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
  if (NULL == stack) {
    cout << "memory allocation failed for stack in create stack function" << endl;
  }
  stack->node = NULL;

  return stack;
}

// push function

void push(struct Stack *stack, int data) {
  if (stack == NULL) {
    cout << "stack is null in push function" << endl;
    return;
  }

  if (stack->node == NULL) {
    stack->node = (struct Node *)malloc(sizeof(struct Node));
    if (stack->node == NULL) {
      cout << "stack->node is null in push function" << endl;
      return;
    }

    stack->node->data = data;
    stack->node->next = NULL;

    return;
  }

  struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
  struct Node *tempnode = stack->node;

  newnode->data = data;
  newnode->next = tempnode;
  stack->node = newnode;

  if (tempnode != NULL) {
    free(tempnode);
    tempnode = NULL;
  }
}

int main() {
  struct Stack *firstStack = createStack();

  push(firstStack, 10);

  return 0;
}