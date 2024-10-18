#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

int pop(void);
void push(int i);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	printf("Enter an RPN expression: ");

	int c;
	while ((c = getchar()) != '\0') {
		printf("%c ", c);
		if (isdigit(c)) {
			push(c - '0');
		} else {
			int a;
			int b;
			int result;

			switch (c) {
				case '+':
					b = pop();
					a = pop();
					result = (a + b);
					push(result);
					break;
				case '-':
					b = pop();
					a = pop();
					result = (a - b);
					push(result);
					break;
				case '*':
					b = pop();
					a = pop();
					result = (a * b);
					push(result);
					break;
				case '/':
					b = pop();
					a = pop();
					result = (a / b);
					push(result);
					break;
				case '\n': 
					printf("\nValue of expression: %d\n",
									pop());
					exit(EXIT_SUCCESS);
			}
		}
	
	}

}

void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(int i){
	if (is_full()){
		stack_overflow();	
	} else {
		contents[top++]	= i;
	}
}

int pop(void){
	if(is_empty()){
		stack_underflow();
	} else {
		return contents[--top];
	}

	return contents[--top];
}

void stack_underflow(void){
	printf("Not enough operand in expression\n");
	exit(EXIT_FAILURE);
}

void stack_overflow(void){
	printf("The expression is too complex\n");
	exit(EXIT_FAILURE);
}
