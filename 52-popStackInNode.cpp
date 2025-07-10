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

// push

void push(struct Stack *stack, int data) {
  if (stack == NULL) {
    cout << "\n stack is null \n" << endl;
    return;
  }

  if (stack->node == NULL) {
    stack->node = (struct node *)malloc(sizeof(struct node)); // default stack node is null so we requesting
                            

    if (stack->node == NULL) {
      cout << "\nstack->node memory allocation failed\n" << endl;
      return;
    }

    stack->node->data = data;
    stack->node->next = NULL;
    return;
  }

  // if stack is not null / its existing stack and we are pushing new element

  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  struct node *tempNode = stack->node;
  newNode->data = data;
  newNode->next = tempNode;
  stack->node = newNode;
}

void Printstack(struct Stack *stack){
    cout << "" << endl;

  if (stack == NULL)
  {
    cout << "\n stack is null\n" << endl;
    return;
  }

  struct node *curr = stack->node;
  while (curr != NULL)
  {
    cout << curr->data << endl;
    curr = curr->next;
  }
cout << "" << endl;
}

// pop

void Pop(struct Stack *stack)
{
  if (stack == NULL)
  {
    return;
  }

  if (stack->node == NULL)
  {
    printf("\nUnderFlow\n");
    return;
  }

  struct node *temp = stack->node;
  stack->node = stack->node->next;

  if (temp != NULL)
  {
    free(temp);
    temp = NULL;
  }
}


int main() {
  //   struct Stack *stack = createStack(10);
  struct Stack *stack = createStack();
  push(stack, 10);
  push(stack, 20);
  push(stack, 30);

    
  Printstack(stack);
    Pop(stack);
  Printstack(stack);
  return 0;
}