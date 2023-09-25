#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *array;
  int capacity;
  int front;
  int rear;
} Queue;

Queue *createQueue(int capacity) {
  Queue *queue = malloc(sizeof(Queue));
  queue->array = malloc(sizeof(int) * capacity);
  queue->capacity = capacity;
  queue->front = 0;
  queue->rear = 0;
  return queue;
}

int isQueueEmpty(Queue *queue) {
  return queue->front == queue->rear;
}

int isQueueFull(Queue *queue) {
  return (queue->rear + 1) % queue->capacity == queue->front;
}

void enqueue(Queue *queue, int element) {
  if (isQueueFull(queue)) {
    return;
  }

  queue->array[queue->rear] = element;
  queue->rear = (queue->rear + 1) % queue->capacity;
}

int dequeue(Queue *queue) {
  if (isQueueEmpty(queue)) {
    return -1;
  }

  int element = queue->array[queue->front];
  queue->front = (queue->front + 1) % queue->capacity;
  return element;
}

int main() {
  Queue *queue = createQueue(100);

  enqueue(queue, 1);
  enqueue(queue, 2);
  enqueue(queue, 3);
  
  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));

  return 0;
}
