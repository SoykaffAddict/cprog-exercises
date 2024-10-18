#include <stdio.h>

float taxDue(float income);

int main(void){
	float income;

	printf("Input your income: ");
	scanf("%f", &income);

	printf("%.2f\n", taxDue(income));

	return 0;
}

float taxDue(float income){
	if (income < 750)
		return income * 0.01f;
	else if (income <= 2250)
		return 7.50 + income * 0.02f;
	else if (income <= 3750)
		return 37.50 + income * 0.03f;
	else if (income <= 5250)
		return 82.50 + income * 0.04f;
	else if (income <= 7000)
		 return 142.50 + income * 0.05f;
	else 
		return 142.50 + income * 0.05f;
}
