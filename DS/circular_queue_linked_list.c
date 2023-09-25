#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

typedef struct Queue {
  Node *rear;
} Queue;

Queue *createQueue() {
  Queue *queue = malloc(sizeof(Queue));
  queue->rear = NULL;
  return queue;
}

int isQueueEmpty(Queue *queue) {
  return queue->rear == NULL;
}

void enqueue(Queue *queue, int element) {
  Node *new_node = malloc(sizeof(Node));
  new_node->data = element;
  new_node->next = NULL;

  if (isQueueEmpty(queue)) {
    new_node->next = new_node;
    queue->rear = new_node;
  } else {
    new_node->next = queue->rear->next;
    queue->rear->next = new_node;
    queue->rear = new_node;

    if (queue->rear == queue->rear->next) {
      printf("Linked list is full\n");
      return;
    }
  }
}

int dequeue(Queue *queue) {
  if (isQueueEmpty(queue)) {
    return -1;
  }

  Node *temp_node = queue->rear->next;
  int element = temp_node->data;

  if (queue->rear == temp_node) {
    queue->rear = NULL;
  } else {
    queue->rear->next = temp_node->next;
  }

  free(temp_node);

  return element;
}

int main() {
  Queue *queue = createQueue();

  enqueue(queue, 1);
  enqueue(queue, 2);
  enqueue(queue, 3);

  enqueue(queue, 4);

  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));

  return 0;
}
