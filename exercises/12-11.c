#include <stdio.h>

#define N 10

void find_largest(int *array, int n, int *store);

int main(void)
{
	int a[N] = {10, 20, 1, 34, 30};
	int result;
	find_largest(a, N, &result);

	printf("%d\n", result);
	
}

void find_largest(int *array, int n, int *store)
{
	int largest = *array;

	for (int *p = array; p < array + n; p++) {
		if (largest < *p)
			largest = *p;
	}

	*store = largest;
}
