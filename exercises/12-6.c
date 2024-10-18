#include <stdio.h>

int sum_array(int *a, int n)
{
	int sum = 0;

	for (int *p = a; p < a + n; p++)
		sum += *p;

	return sum;
}

int main(void)
{
	int a[] = {1, 2, 3};

	printf("%d\n", sum_array(a, 3));
	
	return 0;
}

