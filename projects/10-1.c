#include <stdbool.h> 
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* External variables */
char contents[STACK_SIZE];
int top = 0;

char pop(void);
void push(char i);
bool is_full(void);
bool is_empty(void);
void make_empty(void);
void stack_overflow(void);
void stack_underflow(void);
void nested_improperly(void);

int main(void)
{
	char input[30];

	printf("Enter parentheses and/or braces: ");
	scanf("%s", input);

	int i = 0;
	while (input[i] != '\0'){
		switch(input[i]){
			case '(':
			case '{':
			      push(input[i]);
			      break;

			case '}':
			      if(pop() != '{')
				      nested_improperly();

			      break;

			case ')':
			      if(pop() != '(')
				      nested_improperly();

			      break;
		}

		i++;
	}

	if(!is_empty())
		nested_improperly();		
	else
		printf("Parentheses/braces are nested properly\n");

	return 0;
}

void nested_improperly(void){
	printf("Parenthes and/or braces are nested improperly\n");
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop(void)
{
	if(is_empty())
		stack_underflow();
	else
		return contents[--top];

	return contents[--top];
}

void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	nested_improperly();
	//exit(EXIT_FAILURE);
}
