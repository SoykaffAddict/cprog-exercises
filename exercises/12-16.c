#include <stdio.h>
#include <stdbool.h>

bool search(int y, int x, int a[y][x], int key);
void print_htemp(int y, int x, int matrix[][y]);
void find_largest(int *array, int n, int *store);

int main(void)
{
	int temperatures[7][24] =	{
						{0},
						{0},
						{0, 10, 2},
						{0},
						{0},
						{0},
						{0, 2, 3, 4, 32},
					};


	print_htemp(7, 24, temperatures);
}


void print_htemp(int y, int x, int matrix[][y])
{
	int highest;
	for (int (*p)[x] = &matrix[0]; p < &matrix[x]; p++) {
		find_largest(*p, 24, &highest);
		printf("Highest: %d\n", highest);
	}

	printf("\n");
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
