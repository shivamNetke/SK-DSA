#include <iostream>
#include <malloc.h>

using namespace std;

struct Queue
{
  int front;
  int rear;
  int capacity;
  int *arr;
};

// CreateQueue function
struct Queue *CreateQueue(int size)
{
  struct Queue *newQueue = (struct Queue *)malloc(sizeof(struct Queue));

  if (newQueue == NULL)
  {
    cout << "mem allocation for newqueue failed in createQueue" << endl;
    return NULL;
  }

  newQueue->capacity = size;
  newQueue->front = -1;
  newQueue->rear = -1;

  newQueue->arr = (int *)calloc(sizeof(int), size);

  if (newQueue->arr == NULL)
  {
    cout << "memory allocation for newqueue->arr failed in createQueue" << endl;
    return NULL;
  }

  return newQueue;
}

// is empty function

void isEmpty(struct Queue *queue)
{
    if (NULL == queue)
    {
        cout << "queue is null" << endl;
    }
    if (queue->rear == -1)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }
}

int main()
{
  struct Queue *firstQueue = CreateQueue(5);

  isEmpty(firstQueue);

  return 0;
}