#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

typedef struct Queue {
  struct Node *front;
  struct Node *rear;
} Queue;

Queue *createQueue() {
  Queue *queue = malloc(sizeof(Queue));
  queue->front = NULL;
  queue->rear = NULL;
  return queue;
}

int isQueueEmpty(Queue *queue) {
  return queue->front == NULL;
}

void enqueue(Queue *queue, int element) {
  Node *new_node = malloc(sizeof(Node));
  new_node->data = element;
  new_node->next = NULL;

  if (isQueueEmpty(queue)) {
    queue->front = new_node;
    queue->rear = new_node;
  } else {
    queue->rear->next = new_node;
    queue->rear = new_node;
  }
}

int dequeue(Queue *queue) {
  if (isQueueEmpty(queue)) {
    return -1;
  }

  int element = queue->front->data;
  Node *temp_node = queue->front;
  queue->front = queue->front->next;
  free(temp_node);

  if (queue->front == NULL) {
    queue->rear = NULL;
  }

  return element;
}

int main() {
  Queue *queue = createQueue();

  enqueue(queue, 1);
  enqueue(queue, 2);
  enqueue(queue, 3);

  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));

  return 0;
}
