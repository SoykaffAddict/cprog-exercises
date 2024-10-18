#include <stdio.h>

int main(void){
	float income;

	printf("Input your income: ");
	scanf("%f", &income);

	if (income < 750)
		printf("The tax is: $%.2f\n", income * 0.01f);
	else if (income <= 2250)
		printf("The tax is: $%.2f\n", 7.50 + income * 0.02f);
	else if (income <= 3750)
		printf("The tax is: $%.2f\n", 37.50 + income * 0.03f);
	else if (income <= 5250)
		printf("The tax is: $%.2f\n", 82.50 + income * 0.04f);
	else if (income <= 7000)
		printf("The tax is: $%.2f\n", 142.50 + income * 0.05f);
	else 
		printf("The tax is: $%.2f\n", 142.50 + income * 0.05f);

	return 0;
}
