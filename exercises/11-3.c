#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
	double array[] = {10.2, 3.5, 12.3, 7.8};
	double avg, sum;
	int n = sizeof(array) / sizeof(array[0]);
	
	avg_sum(array, n, &avg, &sum);
	
	printf("%lf\t%lf\n", avg, sum);
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
	int i;

	*sum = 0.0;
	for(i = 0; i < n; i++)
		*sum += a[i];

	*avg = *sum / n;
}
