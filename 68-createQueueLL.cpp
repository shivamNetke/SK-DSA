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





int main()
{
  
  return 0;
}