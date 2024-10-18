#include <stdio.h>

int main(void){
	short int days_in_month = 31;
	short int days_in_year = 365;
	short int minutes_day = 24 * 60;
	int seconds_in_day = 24 * 60 * 60;

	printf("%d\n", days_in_month);
	printf("%d\n", days_in_year);
	printf("%d\n", minutes_day);
	printf("%d\n", seconds_in_day);
}
