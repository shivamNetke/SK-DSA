#include <iostream>
#include <malloc.h>

using namespace std;

struct Queue {
  int front;
  int rear;
  int capacity;
  int *arr;
};

// CreateQueue function
struct Queue *CreateQueue(int size) {
  struct Queue *newQueue = (struct Queue *)malloc(sizeof(struct Queue));

  if (newQueue == NULL) {
    cout << "mem allocation for newqueue failed in createQueue" << endl;
    return NULL;
  }

  newQueue->capacity = size;
  newQueue->front = -1;
  newQueue->rear = -1;

  newQueue->arr = (int *)calloc(sizeof(int), size);

  if (newQueue->arr == NULL) {
    cout << "memory allocation for newqueue->arr failed in createQueue" << endl;
    return NULL;
  }

  return newQueue;
}

// is empty function

void isEmpty(struct Queue *queue) {
  if (NULL == queue) {
    cout << "queue is null in isempty" << endl;
  }
  if (queue->rear == -1) {
    cout << "queue is empty" << endl;
  } else {
    cout << "queue is not empty" << endl;
  }
}

// is full function

void isFull(struct Queue *queue) {
  if (NULL == queue) {
    cout << "queue is null in is full" << endl;
  }
  if (queue->rear == queue->capacity - 1) {
    cout << "queue is full" << endl;
  } else {
    cout << "queue is not full" << endl;
  }
}

// enqueue function

struct Queue *enqueue(struct Queue *queue, int data) {
  if (NULL == queue) {
    cout << "queue is null in enqueue " << endl;
    return NULL;
  }

  if ((queue->rear + 1) % queue->capacity == queue->front) {
    cout << "queue is full | cant do enqueue" << endl;
    return NULL;
  }

  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->arr[queue->rear] = data;

  if (queue->front == -1)
  {
    queue->front++;
  }
  // cout <<" queue fornt = "<< queue->front << endl;
  // cout <<" queue rear = "<< queue->rear << endl;
  // cout <<" queue arr data = "<< queue->arr[queue->rear] << endl;
}



int main() {
  struct Queue *firstQueue = CreateQueue(5);

  enqueue(firstQueue, 10);


  return 0;
}