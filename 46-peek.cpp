#include <iostream>
#include <malloc.h>
using namespace std;

struct Stack {
  int top;
  int cap;
  int *arrPtr;
};

struct Stack *createStack(int cap) {
    if (cap == 0)
  {
    cout << "\ncapacity is 0/null\n" << endl;
    return NULL;
  }

  struct Stack *newStack = (struct Stack *)malloc(sizeof(struct Stack));

  if (newStack == NULL)
  {
    cout << "\newstack memory allocation failed\n" << endl;

    return NULL;
  }

  newStack->cap = cap;
  newStack->top = -1;
  newStack->arrPtr = (int *)malloc(sizeof(int) * cap);

    if (newStack->arrPtr == NULL)
  {
    cout << "\newstack array memory allocation failed\n" << endl;
    return NULL;
  }

  return newStack;
}

// push element in stack
// push function

void Push(struct Stack *stack, int data) {
      if (stack == NULL)
  {
    cout << "\n stack is null\n" << endl;
    return;
  }

  if (stack->top == stack->cap - 1)
  {
    printf("\nStack OverFlow\n");
    return; // Stack OverFlow
  }

  if (stack->arrPtr == NULL)
  {
    printf("\nStack Array NULL\n");
    return;
  }
  stack->arrPtr[stack->top + 1] = data;
  stack->top++;
}


// peek function
// peek mean seeing the top element of stack

void Peek(struct Stack *stack) {
    if (stack == NULL)
  {
    return;
  }

  if (stack->arrPtr == NULL)
  {
    printf("\nStack Array NULL\n");
    return;
  }
  cout << "at the peek of the stack is " << stack->arrPtr[stack->top] << endl;
  ;
}

int main() {
  struct Stack *stack = createStack(10);

  Push(stack, 20);
  Peek(stack);
  Push(stack, 30);
  Peek(stack);
  Push(stack, 40);
  Peek(stack);
  Push(stack, 50);
  Peek(stack);
  return 0;
}