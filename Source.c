#include "Stack.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXINPUT   80
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

int main(void) 
{
	
	struct Stack* stack = createStack(); //creating stack
	
	char inputBuffer[MAXINPUT]; //variable declaration
	printf("enter a word: "); //asking user to input a word
	while (gets_s(inputBuffer, MAXINPUT) && inputBuffer[0] != '\0') //Loop so user can input multiple strings
	{
		int i = 0; //variable declaration
		while (inputBuffer[i] != '\0') //inputbuffer can't equal empty line
			push(stack, inputBuffer[i++]); //Push Elements

		char ch; //Declaring char
		while (ch = pop(stack))//while char = pop function
			printf("%c", ch); //Pop out charachters and print them
		
		putchar('\n'); //newline
		printf("Enter next line (empty line to quit): "); //ask user to input another string or exit.

		
	}
	disposeStack(stack); //dispose stack
	puts("Done!");//program done
	
	return 0;

}