#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
	int a[10] = {1, 2, 3, 4, 5};
	int f, s;
	find_two_largest(a, 10, &f, &s);
	
	printf("%d\t%d\n", f, s);
	return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	*largest = *a;
	*second_largest = *a;

	for (int const *p = a; p < a + n; p++) {
		if (*largest < *p)
			*largest = *p;
	}

	for (int const *p = a; p < a + n; p++) {
		if ((*second_largest < *p) && (*p < *largest))
			*second_largest = *p;
	}
}
