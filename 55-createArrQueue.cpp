#include <iostream>
#include <malloc.h>
using namespace std;

struct Queue {
  int capacity;
  int front;
  int rear;
  int *arr;
};

// create queue function

struct Queue *createQueue(int capacity)
{
    struct Queue *newqueue = (struct Queue *)malloc(sizeof(struct Queue));
    if (NULL == newqueue)
    {
        cout << "memory allocation failed for queue in createQueue" << endl;
        return NULL;     
    }

    newqueue->capacity = capacity;
    newqueue->front = -1;
    newqueue->rear = -1;

    newqueue->arr = (int *)malloc(sizeof(int)*capacity);

    if (NULL == newqueue->arr)
    {
        cout << "memory allocation failed for newqueue arr in createQueue" << endl;
        return NULL;
    }

    return newqueue;
}

int main() {
    struct Queue *firstQueue = createQueue(5);
    return 0;
}