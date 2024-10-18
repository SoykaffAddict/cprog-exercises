#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
	int i = 1, j = 6; 

	printf("%d\t%d\n", i, j);
	swap(&i, &j);
	printf("%d\t%d\n", i, j);

	return 0;
}

void swap(int *p, int *q)
{
	int temp = *q;
	*q = *p;
	*p = temp;
}
