#include <iostream>
#include<malloc.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front;
    struct Node *rear;
};

// create queue function

struct Queue *createQueueLL()
{
    struct Queue *newQueue = (struct Queue*)malloc(sizeof(struct Queue));
    if (NULL == newQueue)
    {
        cout << "memory allocation failed for newQueue in createQueueLL func" << endl;
        return NULL;
    }

    newQueue->front = NULL;
    newQueue->rear = NULL;

    return newQueue;
}

// enqueue function

void enqueue(struct Queue *queue, int data)
{
    if (NULL == queue)
    {
        cout << "queue is null in enqueue func" << endl;
        return;
    }

    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    if (NULL == newnode )
    {
        cout << "newnode is null in enqueue func" << endl;
        return;
    }

    if (NULL == queue->rear)
    {
        
        queue->front = newnode;
        queue->rear = newnode;
        
        queue->rear->data = data;
        queue->rear->next = NULL;
        
        return;
    }

  queue->rear->next = newnode;
  queue->rear = newnode;
  queue->rear->data = data;
  queue->rear->next = NULL;
}


int main()
{
  struct Queue *firstQueue = createQueueLL();
  return 0;
}