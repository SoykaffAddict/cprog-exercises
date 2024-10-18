#include <stdio.h>

int main(void)
{
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];

	//(a) = 14
	printf("%d\n", *(p + 3));

	//(b) = 34
	printf("%d\n", *(q - 3));

	//(c) = 14
	printf("%ld\n", q - p);

	//(d) = true
	printf("%d\n", p < q);

	//(e) = false
	printf("%d\n", *p < *q);
}
