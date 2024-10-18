#include <stdio.h>

int sum_two_dimensional_array(int rows, int cols, int a[rows][cols]);

int main(void)
{
	int array[4][4] =	{
					{1,1,1,1},
					{1,1,1,1},
					{1,1,1,1},
					{1,1,1,1},
				};

	printf("%d\n", sum_two_dimensional_array(4, 4, array));

	return 0;
}

int sum_two_dimensional_array(int rows, int cols, int a[rows][cols])
{
	int sum = 0;

	for (int const *p = &a[0][0]; p <= &a[rows-1][cols-1]; p++)
		sum += *p;

	return sum;
}
