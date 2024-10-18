#include <stdio.h>

int gcd(int n, int m);
void reduce(int numerator, int denominator, int *reduced_numerator, 
					int *reduced_denominator);

int main(void)
{
	int num1, num2, divisor;
	int red1, red2;

	printf("Enter a fraction: ");
	scanf("%d/%d", &num1, &num2);
	divisor = gcd(num1, num2);

	printf("In lowest terms: %d/%d\n", num1 / divisor, num2 / divisor);
	reduce(num1, num2, &red1, &red2);
	printf("Reduced to: %d/%d\n", red1, red2);

	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, 
					int *reduced_denominator) 
{
	int divisor = gcd(numerator, denominator);
	*reduced_numerator = numerator / divisor;
	*reduced_denominator = denominator / divisor;
}

int gcd(int n, int m)
{
	int remainder; 

	while (n > 0) {
		remainder = m %= n;	
		m = n;
		n = remainder;
	}

	return m;
}
