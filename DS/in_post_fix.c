#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int evaluate(char *expr) {
  int stack[100];
  int top = -1;
  for (int i = 0; expr[i]; i++) {
    if (isdigit(expr[i])) {
      stack[++top] = expr[i] - '0';
    } else {
      int op2 = stack[top--];
      int op1 = stack[top--];
      switch (expr[i]) {
        case '+':
          stack[top] = op1 + op2;
          break;
        case '-':
          stack[top] = op1 - op2;
          break;
        case '*':
          stack[top] = op1 * op2;
          break;
        case '/':
          stack[top] = op1 / op2;
          break;
      }
    }
  }
  return stack[top];
}

int precedence(char op) {
  switch (op) {
    case '+':
    case '-':
      return 1;
    case '*':
    case '/':
      return 2;
    case '^':
      return 3;
    default:
      return 0;
  }
}

void inTopost(char *expr) {
  char stack[100];
  int top = -1;

  char postfix[100];
  int i = 0, j = 0;
  while (expr[i]) {
    if (isalnum(expr[i])) {
      postfix[j++] = expr[i];
    } else if (expr[i] == '(') {
      stack[++top] = expr[i];
    } else if (expr[i] == ')') {
      while (stack[top] != '(') {
        postfix[j++] = stack[top--];
      }
      top--;
    } else {
      while (top >= 0 && precedence(stack[top]) > precedence(expr[i])) {
        postfix[j++] = stack[top--];
      }
      
      stack[++top] = expr[i];
    }
    i++;
  }

  while (top >= 0) {
    postfix[j++] = stack[top--];
  }

  postfix[j] = '\0';
  printf("%s\n", postfix);
}

int main() {
  char expr[100];
  printf("Enter the infix expression: ");
  scanf("%s", expr);
  
  inTopost(expr);
  

  return 0;
}
