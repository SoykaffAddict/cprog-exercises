#include <stdio.h>

double inner_product(double *a, double *b, int n);

int main(void){
	double a[] = {1, 2, 3};
	double b[] = {0, 1, 0};
	double number = inner_product(a, b, 10);

	printf("Product: %.2lf\n", number);
	return 0;
}

double inner_product(double *a, double *b, int n){
	int result = 0;

	for(int i = 0; i < n-1; i++){
		result += a[i] * b[i];
	}

	return result;
}
