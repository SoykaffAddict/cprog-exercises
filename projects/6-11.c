#include <stdio.h>

//Calculates the value of Euler

int factorial(int n){
	float sum = 1;

	for (int i = 1; i <= n; i++){
		sum *= i;	
	}

	return sum;
}

int main(void){
	float e=1;
	int n;

	printf("Write a number: ");
	scanf("%d", &n);

	for (int i=1; i < n; i++){
		e += 1.0f / factorial(i);
	}

	printf("%f\n", e);

	return 0;
}
