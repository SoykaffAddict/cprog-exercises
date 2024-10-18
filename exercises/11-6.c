#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
	int array[] = {1, 3, 2, 4, 10, 20, 5};
	int size = sizeof(array) / sizeof(array[0]);
	int largest, second_largest;

	find_two_largest(array, size, &largest, &second_largest);

	printf("%d\t%d\n", largest, second_largest);
	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = a[0];
	*second_largest = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] > *largest)		
			*largest = a[i];
	}

	for (int i = 1; i < n; i++) {
		if (a[i] > *second_largest && a[i] < *largest) 
			*second_largest = a[i];
	}
}
