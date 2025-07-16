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

// is empty function

void isEmpty(struct Queue *queue)
{
    if (NULL == queue)
    {
        cout << "queue is null in isempty function" << endl;
        return;
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


int main() {
    struct Queue *firstQueue = createQueue(5);
    isEmpty(firstQueue);
    return 0;
}