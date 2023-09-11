#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *top = NULL;

void push(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = top;
  top = newNode;
}

int pop() {
  if (top == NULL) {
    printf("Stack is empty\n");
    return -1;
  }

  int data = top->data;
  top = top->next;
  free(top);
  return data;
}

int peek() {
  if (top == NULL) {
    printf("Stack is empty\n");
    return -1;
  }

  return top->data;
}

int isEmpty() {
  return top == NULL;
}

void display() {
  if (top == NULL) {
    printf("Stack is empty\n");
    return;
  }

  struct Node *temp = top;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  int choice;
  int data;

  while (1) {
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Is Empty\n");
    printf("5. Display\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter data to push: ");
        scanf("%d", &data);
        push(data);
        break;
      case 2:
        data = pop();
        if (data != -1) {
          printf("Popped data = %d\n", data);
        }
        break;
      case 3:
        data = peek();
        if (data != -1) {
          printf("Top data = %d\n", data);
        }
        break;
      case 4:
        printf("Is stack empty? %s\n", isEmpty() ? "Yes" : "No");
        break;
      case 5:
        display();
        break;
      case 6:
        return 0;
      default:
        printf("Invalid choice\n");
    }
  }
  return 0;
}
