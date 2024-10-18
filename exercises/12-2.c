#include <stdio.h>

int main(void)
{
	int array[] = {1, 2, 3, 4, 5};

	int *low = &array[0], *high = &array[4];
	int *middle = low + (high - low) / 2;

	printf("%d\n", *middle);

}
