#include <stdio.h>

int gcd(int n, int m){
	int remainder; 

	while (n > 0){
		remainder = m %= n;	
		m = n;
		n = remainder;
	}

	return m;
}

int main(void){
	int num1, num2, divisor;

	printf("Enter a fraction: ");
	scanf("%d/%d", &num1, &num2);
	divisor = gcd(num1, num2);

	printf("In lowest terms: %d/%d\n", num1 / divisor, num2 / divisor);

	return 0;
}
