#include <stdio.h>

int main(void){
	float loan, interest_rate, monthly_payment;	
	float first_payment, second_payment, third_payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	
	printf("\n");

	first_payment = loan - monthly_payment + (loan * interest_rate / 100 / 12);
	loan = first_payment;
	second_payment = loan - monthly_payment + (loan * interest_rate / 100 / 12);
	loan = second_payment;
	third_payment = loan - monthly_payment + (loan * interest_rate / 100 / 12);


	printf("Balance remaining after first payment: $%.2f\n", first_payment);
	printf("Balance remaining after second payment: $%.2f\n", second_payment);
	printf("Balance remaining after third payment: $%.2f\n", third_payment);

	return 0;
}
