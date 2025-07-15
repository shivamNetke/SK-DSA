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
    cout << "memory allocation failed for stack in createStack fun" << endl;
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

  newnode->data = data;
  newnode->next = stack->node;
  stack->node = newnode;
}

// print stack

void printNodeStack(struct Stack *stack) {
  cout << "" << endl;
  struct Node *current = stack->node;
  while (current != NULL) {

    cout << current->data << endl;
    current = current->next;
  }
}

// pop

void pop(struct Stack *stack) {

  if (stack->node == NULL) {

    cout << "stack->node is null| underflow occur " << endl;
    return;
  }

  struct Node *tempnode = stack->node;
  stack->node = stack->node->next;

  if (tempnode != NULL) {
    free(tempnode);
    tempnode = NULL;
  }
}

// peek

void peek(struct Stack *stack) 
{
    if (stack == NULL)
    {
        cout << "stack is null in peek" << endl;
        return;
    }
    cout << "peek = "<<stack->node->data << endl;
}

int main() {
  struct Stack *firstStack = createStack();

  push(firstStack, 10);

  printNodeStack(firstStack);

  push(firstStack, 20);

  printNodeStack(firstStack);

  push(firstStack, 30);

  printNodeStack(firstStack);

  push(firstStack, 40);

  printNodeStack(firstStack);

  push(firstStack, 50);

  printNodeStack(firstStack);

  pop(firstStack);
  printNodeStack(firstStack);

  pop(firstStack);
  printNodeStack(firstStack);

  peek(firstStack);

  return 0;
}