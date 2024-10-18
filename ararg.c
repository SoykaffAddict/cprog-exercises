#include <stdio.h>

int find_largest(int a[], int n)
{
	int i, max;
	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	
	return max;
}
