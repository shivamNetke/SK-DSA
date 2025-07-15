#include <iostream>
#include <malloc.h>

using namespace std;

struct Stack {
  int cap;
  int top;
  int *arrptr;
};

// create stack function

struct Stack *createStack(int cap) {
    if(0 == cap)
    {
        cout<<endl << "cap is NULL" << endl;
        return NULL;
    }

    struct Stack *newStackPtr = (struct Stack *)malloc(sizeof(struct Stack));

    if(NULL == newStackPtr)
    {
        cout << "memory allocation failed for newStackPtr" << endl;
        return NULL;
    }

    newStackPtr->cap = cap;
    newStackPtr->top = -1;
    newStackPtr->arrptr = (int *)malloc(sizeof(int)*cap);

    if(NULL == newStackPtr->arrptr)
    {
        cout << "memory allocation failed for arrptr" << endl;
    }

    return newStackPtr;

}

// is empty

void isEmpty(struct Stack *stack)
{
  if (stack == NULL)
  {
    cout << "stack is null in isempty" << endl;
    return;
  }

  if (stack->top == -1)
  {
    cout << "stack is empty " << endl;
    return ;
  }
}

int main() {
  struct Stack *firstStackPtr = createStack(5);
  isEmpty(firstStackPtr);
  return 0;
}