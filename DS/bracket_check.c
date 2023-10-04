#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Stack {
    char data;
    struct Stack* next;
};

void push(struct Stack** stack, char data) {
    struct Stack* newNode = (struct Stack*)malloc(sizeof(struct Stack));   
    if (newNode == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = *stack;
    *stack = newNode;
}

char pop(struct Stack** stack) {
    if (*stack == NULL) {
        printf("Stack is empty\n");
        exit(1);
    }
    char data = (*stack)->data;
    struct Stack* temp = *stack;
    *stack = (*stack)->next;
    free(temp);
    return data;
}

bool balanceparenthesis(const char* expr) {
    struct Stack* stack = NULL;
    
    for (int i = 0; expr[i]; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(&stack, expr[i]);
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (stack == NULL) {
                return false; 
            }

            char top = pop(&stack);
            if ((expr[i] == ')' && top != '(') ||
                (expr[i] == '}' && top != '{') ||
                (expr[i] == ']' && top != '[')) {
                return false; 
            }
        }
    }

    return (stack == NULL); 
}

int main() {
    char expr[20];
    printf("Enter brackets: ");
    gets(expr);
    
    if (balanceparenthesis(expr)) {
        printf("Parentheses are balanced\n");
    } else {
        printf("Parentheses are not balanced\n");
    }

    return 0;
}
