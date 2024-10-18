#include <stdio.h>

int main(void){
	int dollars;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollars);

	// Uses the remainder of the last divisions and divides by it
	printf("$20 bills: %d\n", dollars / 20);
	printf("$10 bills: %d\n", (dollars % 20) / 10);
	printf("$5 bills: %d\n", ((dollars % 20) % 10) / 5);
	printf("$1 bills: %d\n", (((dollars % 20) % 10) % 5) / 1) ; //just for aesthetic

	return 0;
}
