#pragma once
/*Final: 20.00 / 20.00 - 100.00 %
Question 1 : Create and use a stack
o Specifications : 8.0 / 8.0 (The program works and meets all of the specifications.)
o Readability : 4.0 / 4.0 (The code is exceptionally well organized and very easy to follow.)
o Reusability : 4.0 / 4.0 (The code could be reused as a whole or each routine could be reused.)
o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code is accomplishing and how.)*/

//Dominic Szymanski - PRG71985 - Assignment #5 Refactor - 12/06/2022
/*This program will implement an array based stack that will take a string as input
and then pop the string out in reverse order. This program will work with Steve's given
stack. and satck.h files.*/

struct Stack {
    int top;
    unsigned capacity; //Stuct declaration
    char* array;
};
struct Stack* disposeStack(struct Stack* stack); //checks if stack is empty

struct Stack* createStack(); //Initialize the stack and is initialized to being empty

int isFull(struct Stack* stack); //Check if stack is full

int isEmpty(struct Stack* stack); //Check if stack is empty

void push(struct Stack* stack, char item); //Push Elements 

char pop(struct Stack* stack); //pop elemnts