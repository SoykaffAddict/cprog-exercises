#include <stdio.h>

int *find_middle(int a[], int n);

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	printf("%d\n", *find_middle(a, 5));

	return 0;
}

int *find_middle(int a[], int n)
{
	int *low = a;
	int *high = a + n;

	return  low + (high - low) / 2;
}


