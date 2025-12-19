#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Stack iþlemleri */
void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    return stack[top--];
}

/* Operatör önceliði */
int precedence(char x) {
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

/* Operand kontrolü */
int isOperand(char x) {
    if ((x >= 'a' && x <= 'z') ||
        (x >= 'A' && x <= 'Z') ||
        (x >= '0' && x <= '9'))
        return 1;
    return 0;
}

/* Infix › Postfix */
void infixToPostfix(char infix[]) {
    int i = 0;
    char x;

    printf("Postfix: ");

    while (infix[i] != '\0') {

        if (isOperand(infix[i])) {
            printf("%c", infix[i]);
        }
        else if (infix[i] == '(') {
            push(infix[i]);
        }
        else if (infix[i] == ')') {
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        }
        else {
            while (top != -1 &&
                   precedence(stack[top]) >= precedence(infix[i])) {
                printf("%c", pop());
            }
            push(infix[i]);
        }
        i++;
    }

    while (top != -1) {
        printf("%c", pop());
    }

    printf("\n");
}

int main() {
    char infix[MAX];

    printf("Infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix);

    return 0;
}

