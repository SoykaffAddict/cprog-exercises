#include <stdio.h>
int stack_overflow(void);
int stack_underflow(void);
int is_full(void);
int is_empty(void);
void make_empty(void);
void push(int i);

int array[100];
int *top_ptr = &array[0];

int main(void)
{


	return 0;
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		*top_ptr++ = i;
}

int pop(void) 
{
	if (is_empty)
		stack_underflow();
	else
		return *--top_ptr;
}

int is_full(void)
{
	return *top_ptr == 100;
}

int is_empty(void) 
{
	*top_ptr = 0;
}

void make_empty(void)
{
	*top_ptr = 0;
}

int stack_overflow(void)
{

}

int stack_underflow(void)
{

}
