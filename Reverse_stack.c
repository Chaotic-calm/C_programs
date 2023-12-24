#include <stdio.h>
#include <stdlib.h>

// Assume a simple stack structure
struct Stack {
    int *arr;
    int top;
    unsigned capacity;
};

// Function to create a stack
struct Stack createStack(unsigned capacity) {
    struct Stack stack;
    stack.capacity = capacity;
    stack.top = -1;
    stack.arr = (int *)malloc(stack.capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int item) {
    stack->arr[++stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

// First function to reverse the stack
void reverseStack(struct Stack *stack) {
    if (!isEmpty(stack)) {
        int temp = pop(stack);
        reverseStack(stack);
        insertAtBottom(temp, stack);
    }
}

// Second function to add items at the bottom
void insertAtBottom(int temp, struct Stack *stack) {
    if (isEmpty(stack)) {
        push(stack, temp);
    } else {
        int x = pop(stack);
        insertAtBottom(temp, stack);
        push(stack, x);
    }
}

int main() {
    struct Stack stack = createStack(5);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);

    // Reverse the stack
    reverseStack(&stack);

    // Print the reversed stack
    while (!isEmpty(&stack)) {
        printf("%d ", pop(&stack));
    }

    return 0;
}
