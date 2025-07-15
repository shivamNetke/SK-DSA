#include <iostream>
#include<malloc.h>

using namespace std;

struct Stack
{
    struct Stack *node;
};

struct Node
{
    int data;
    struct Node *next;
};  

// createNode

struct Stack *createStack()
{
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (NULL == stack)
    {
        cout << "memory allocation failed for stack in createStack fun" << endl;
    }
    stack->node = NULL;
}

int main()
{
    struct Stack *firstStack = createStack();
  
    return 0;
}