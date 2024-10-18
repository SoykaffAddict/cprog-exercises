#include <stdio.h>

int main(void){
	int number;
	long double result=1;

	printf("Write a number: ");
	scanf("%d", &number);

	for(int i = 1; i <= number; i++){
		result *= i;	
	}

	printf("Factorial of %d: %Lf\n", number, result);
}
