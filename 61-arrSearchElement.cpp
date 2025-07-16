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

// isfull function

void isFull(struct Queue *queue)
{
    if (NULL == queue)
    {
        cout << "queue is null in isfull function" << endl;
        return;
    }

    if (queue->rear == queue->capacity-1)
    {
        cout << "queue is full" << endl;
    }
    else
    {
        cout << "queue is not full" << endl;
    }
}

// Enqueue in arr

void EnqueueArr(struct Queue *queue, int data)
{
    if (NULL == queue )
    {
        cout << "queue is null in enqueueArr func" << endl;
        return; 
    }

    if (queue->rear == -1)      
    {
        queue->rear++;
        queue->front++;
        queue->arr[queue->rear] = data;
        return;
    }

   
    if (queue->rear == queue->capacity-1)
    {
        cout << "queue cap is "<< queue->capacity <<" and you are adding "<<queue->capacity+1<<" element in queue | cant perform the action queue is full" << endl;
        return;
    }

    queue->rear ++;
    queue->arr[queue->rear] = data;
    cout << queue->arr[queue->rear]<< endl;
    if (queue->rear == queue->capacity-1)
    {
        cout << "added the last element queue is full" << endl;
    }

}

// print queue

void printArrQueue(struct Queue *queue)
{
    if (NULL == queue)
    {
        cout << "queue is null in printArrQueue" << endl;
        return;
    }

    for (int i = queue->front; i <= queue->rear; i++)
    {
      cout << queue->arr[i] << endl;
    }
}

// dequeue
// FIFO
// first in first out

void arrDequeue(struct Queue *queue)
{
    if (NULL == queue)
    {
        cout << "queue is null in arrDequeue " << endl;
        return;
    }

    if (queue->front == queue->rear)
    {
        cout << "all elements deleted " << endl;
        return;
    }

    queue->front++;
}

// search element 

void arrSearchElement(struct Queue *queue, int data)
{
    int found = 0; 

    for (int i = queue->front; i <= queue->rear; i++)
    {
        if (queue->arr[i] == data)
        {
            cout << data << " found at index " << i << endl;
            found = 1; 
        }
    }

    if (found == 0)
    {
        cout << "data not found" << endl;
    }
}


int main() {
    struct Queue *firstQueue = createQueue(5);
    isEmpty(firstQueue);
    isFull(firstQueue);
    EnqueueArr(firstQueue, 10);
    EnqueueArr(firstQueue, 20);
    EnqueueArr(firstQueue, 30);
    EnqueueArr(firstQueue, 20);
    EnqueueArr(firstQueue, 50);

    arrSearchElement(firstQueue, 20);
    arrSearchElement(firstQueue, 99);

    return 0;
}