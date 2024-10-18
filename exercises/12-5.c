#include <stdio.h>

int main(void)
{
	int a[4] = {0, 1, 2, 3};
	int *p = a;

	//(a) = false
	// printf("%d\n", p == a[0]);

	//(b) = true
	 printf("%d\n", p == &a[0]);

	//(c) = true
	 printf("%d\n", *p == a[0]);

	//(c) = true
	 printf("%d\n", p[0] == a[0]);
}
