#include <stdio.h>
#include <math.h>

int main(void){
	float x;

	printf("Enter the value of X: ");
	scanf("%f", &x);

	float polynomial = ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("Result: %.4f\n", polynomial);

	return 0;
}
