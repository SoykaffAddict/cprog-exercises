#include <stdio.h>

void
pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
	int dollars = 93, twenties, tens, fives, ones;

	pay_amount(dollars, &twenties, &tens, &fives, &ones);
	printf("20: %d\n10: %d\n5: %d\n1: %d\n", twenties, tens, fives, ones);

	return 0;
}

void 
pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20;
	*tens = dollars % 20 / 10;
	*fives = dollars % 10 / 5;
	*ones = dollars % 5 / 1;
}
