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


int main() {
  struct Stack *stack = createStack(10);
  return 0;
}