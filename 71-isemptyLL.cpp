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

// print queue

void printQueue(struct Queue *queue)
{
    if (NULL == queue)
    {
        cout << "queue is null in printQueue" << endl;
        return;
    }

    struct Node *current = (struct Node *)malloc (sizeof(struct Node));

    if (NULL == current)
    {
        cout << "current is null in printQueue" << endl;
        return;
    }

    current = queue->front;

    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
    cout << "" << endl;
}

// dequeue

void dequeue(struct Queue *queue)
{
    if (NULL == queue)
    {
        cout << "queue is null in dequeue func" << endl;
        return;
    }

    if (NULL == queue->front)
    {
        cout << "queue is empty | underflow" << endl;
        return;
    }

    struct Node *temp = queue->front;

    queue->front = queue->front->next;

    if (temp != NULL)
    {
        free(temp);
        temp=NULL;
    }

}

// is empty

void isEmpty(struct Queue *queue)
{
    if (NULL == queue)
    {
        cout << "queue is null in isempty" << endl;
        return;
    }

    if (queue->front == NULL)
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
  struct Queue *firstQueue = createQueueLL();

  isEmpty(firstQueue);

  enqueue(firstQueue, 10);

  isEmpty(firstQueue);
  
  return 0;
}