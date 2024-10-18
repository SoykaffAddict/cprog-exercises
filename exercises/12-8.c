#include <stdio.h>

void store_zeros(int a[], int n);
void display_array(int a[], int n);

int main(void)
{
	int a[10];

	store_zeros(a, 10);
	display_array(a, 10);
}

void store_zeros(int a[], int n)
{
	for (int *p = a; p < a + n; p++)
		*p = 0;
}

void display_array(int a[], int n)
{
	for (int *p = a; p < a + n; p++)
		printf("%d ", *p);

	printf("\n");
}
