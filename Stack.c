#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#define MAXSIZE       100


/*This program will implement an array based stack that will take a string as input
and then pop the string out in reverse order. This program will work with Steve's given
stack. and satck.h files.*/

struct Stack* createStack()
{
    struct Stack* stack  = (struct Stack*)malloc(sizeof(struct Stack)); //Memory allocation
    stack->capacity = MAXSIZE; //setting a capacity
    stack->top = -1; //points to a stack and initializes stack to being empty
    stack->array = (char*)malloc(stack->capacity * sizeof(char));
    return stack;
}
struct Stack* disposeStack(struct Stack* stack)
{
    struct Stack* stack1 = createStack(); //disposing of previous stack
    stack = stack1;
}


int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1; //checking to see if stack is full
}


int isEmpty(struct Stack* stack)
{
    return stack->top == -1; //checking to see if stack is empty
}

void push(struct Stack* stack, char item)
{
    if (isFull(stack)) //checking to see if stack is full
        return;
    stack->array[++stack->top] = item; // pop item to top of the stack
}


char pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return '\0';
    return stack->array[stack->top--]; // remove item from top of the stack
}