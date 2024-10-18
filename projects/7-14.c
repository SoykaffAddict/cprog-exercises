#include <stdio.h>
#include <math.h>

double squareRoot(double n, float l){
	double x = n;
	double root;
	int count = 0;

	while(1){
		count++;	

		root = 0.5 * (x + (n / x));

		if (fabs(root - x) < l)
			break;

		x = root;
	}

	return root;
}

int main(void){
	double n;
	float l = 0.00001;

	printf("Enter a number: ");
	scanf("%lf", &n);
	printf("Square root: %f\n", squareRoot(n, l));
}
