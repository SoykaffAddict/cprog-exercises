#include <stdio.h>
#include <math.h>

int calcPolynominal(int x);

int main(void){
	printf("%d\n", calcPolynominal(2));
}

int calcPolynominal(int x){
	return pow((3 * x), 5) +
			pow((2 * x), 4) -
			pow((5 * x), 3) -
			(x * 2) + 
			(7 * x) -
			6;
}
