#include <stdio.h>

int main(void){
	float loan, interest_rate, monthly_payment;	
	int num_payments;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	printf("Enter number of payments: ");
	scanf("%d", &num_payments);
	printf("\n");

	for(int i = 0; i < num_payments; i++){
		loan = loan - monthly_payment + (loan * interest_rate / 100 / 12);
		printf("Balance remaining after payment %d: $%.2f\n", i+1, loan);
	}

	return 0;
}
