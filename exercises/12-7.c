#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
	int a[] = {1, 2, 30, 4};

	printf("%d\n", search(a, 4, 30));
	
	return 0;
}

bool search(const int a[], int n, int key)
{
	for (int const *p = a; p < a + n; p++)	
		if (*p == key)
			return true;

	return false;
}
