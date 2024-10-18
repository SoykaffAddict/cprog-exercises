#include <stdio.h>
#include <stdbool.h>

bool search(int y, int x, int a[y][x], int key);
void print_row_val(int y, int x, int matrix[][x], int i);

int main(void)
{
	int temperatures[7][24] =	{
						{0},
						{0},
						{0},
						{0},
						{0},
						{0},
						{0, 2, 3, 4, 32},
					};

	//printf("%d\n", search(7, 24, temperatures, 32));

	print_row_val(7, 24, temperatures, 6);
}

bool search(int y, int x, int a[y][x], int key)
{
	for (int *p = &a[0][0]; p <= &a[y-1][x-1]; p++) {
		if (*p == key) {
			return true;
		}
	}

	return false;
}

void print_row_val(int y, int x, int matrix[][x], int i)
{
	for (int *p = matrix[i]; p < matrix[i] + y; p++)
		printf("%d\n", *p);

	printf("\n");
}
