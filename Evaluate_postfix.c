#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Function to create a stack
struct Stack createStack(unsigned capacity) {
    struct Stack stack;
    stack.top = -1;
    stack.capacity = capacity;
    stack.array = (int*)malloc(stack.capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element to the stack
void push(struct Stack* stack, int item) {
    stack->array[++stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1; // Stack underflow
    return stack->array[stack->top--];
}

// Function to evaluate a postfix expression
int evaluatePostfix(char* exp) {
    struct Stack stack = createStack(strlen(exp));

    if (!stack.array)
        return -1; // Unable to create the stack

    for (int i = 0; exp[i]; ++i) {
        if (isdigit(exp[i]))
            push(&stack, exp[i] - '0');
        else {
            int val1 = pop(&stack);
            int val2 = pop(&stack);
            switch (exp[i]) {
                case '+':
                    push(&stack, val2 + val1);
                    break;
                case '-':
                    push(&stack, val2 - val1);
                    break;
                case '*':
                    push(&stack, val2 * val1);
                    break;
                case '/':
                    push(&stack, val2 / val1);
                    break;
            }
        }
    }
    return pop(&stack);
}

int main() {
    char postfixExpression[] = "23*5+";
    int result = evaluatePostfix(postfixExpression);
    printf("Result: %d\n", result);
    return 0;
}
