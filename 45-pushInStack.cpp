#include <iostream>
#include <malloc.h>

using namespace std;

struct Stack
{
    int cap;
    int top;
    int *arrptr;
};

// create stack function

struct Stack *createStack (int cap)
{
    if (0 == cap)
    {
        cout << endl
             << "cap is NULL" << endl;
        return NULL;
    }

    struct Stack *newStackPtr = (struct Stack *)malloc (sizeof (struct Stack));

    if (NULL == newStackPtr)
    {
        cout << "memory allocation failed for newStackPtr" << endl;
        return NULL;
    }

    newStackPtr->cap = cap;
    newStackPtr->top = -1;
    newStackPtr->arrptr = (int *)malloc (sizeof (int) * cap);

    if (NULL == newStackPtr->arrptr)
    {
        cout << "memory allocation failed for arrptr" << endl;
    }

    return newStackPtr;
}

// push in stack

void push (struct Stack *stack, int data)
{
    if (NULL == stack)
    {
        cout << "stack is null" << endl;
        return;
    }

    if (stack->top == stack->cap - 1)
    {
        cout << "stack limit is " << stack->cap << " and you are pushing the "
             << stack->cap + 1 << " therefore stackoverflow" << endl;
        return;
    }

    if (NULL == stack->arrptr)
    {
        cout << "stack arrptr is null" << endl;
        return;
    }

    stack->arrptr[stack->top + 1] = data;

    stack->top++;
    cout << "stack->top = " << stack->arrptr[stack->top] << endl;
}

int main ()
{
    struct Stack *firstStack = createStack (5);

    push (firstStack, 10);
    push (firstStack, 20);
    push (firstStack, 30);
    push (firstStack, 40);

    return 0;
}