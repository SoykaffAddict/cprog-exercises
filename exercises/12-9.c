#include <stdio.h>

#define N 5

double inner_product(const double *a, const double *b, int n);

int main(void)
{
	double arr1[] = {1, 2, 3, 4, 5};
	double arr2[] = {1, 2, 3, 4, 5};
	printf("%lf\n", inner_product(arr1, arr2, N));

	return 0;
}

double inner_product(const double *a, const double *b, int n)
{
	double sum = 0;

	for (double const *pa = a, *pb = b; pa < a + n; pa++, pb++) {
		sum += *pa * *pb;
	}

	return sum;
}
