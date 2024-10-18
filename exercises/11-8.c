#include <stdio.h>

int *find_largest(int a[], int n);

int main(void) 
{
	int array[] = {1, 3, 2, 10, 4};
	int *pointer = find_largest(array, sizeof(array) / sizeof(array[0]));
	
	printf("%d\n", *pointer);
	return 0;
}

int *find_largest(int a[], int n)
{
	int largest = a[0];
	int *largest_pntr;

	for(int i = 0; i < n; i++) {
		if(a[i] > largest) {
			largest = a[i];
			largest_pntr = &a[i];
		}
	}

	return largest_pntr;
}
