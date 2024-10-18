#include <stdio.h>
#include <math.h>

int main(void){
	float x;

	printf("Enter the value of X: ");
	scanf("%f", &x);

	float polynomial = 3 * (pow(x, 5)) + 2 * (pow(x, 4)) - 5 * (pow(x, 3)) - pow(x, 2) + (7 * x) - 6;

	printf("Result: %.4f\n", polynomial);

	return 0;
}
