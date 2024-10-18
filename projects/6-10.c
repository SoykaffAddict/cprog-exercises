#include <stdio.h>

int date_m(int month, int day, int year){
	
	return (day * 24 * 60) + (month * 24 * 60 * 30) + (year * 24 * 60 * 30 * 12);
}

int main(void){
	int fmonth, fday, fyear;
	int smonth, sday, syear; 

	printf("Enter a date: ");
	scanf("%d/%d/%d", &fmonth, &fday, &fyear);

	smonth = fmonth;
	sday = fday;
	syear = fyear;

	while (date_m(fmonth, fday, fyear) != 0 ){
		if (date_m(fmonth, fday, fyear) < date_m(smonth, sday, syear)){
			smonth = fmonth;
			sday = fday;
			syear = fyear;
		}

		printf("Enter a date date: ");
		scanf("%d/%d/%d", &fmonth, &fday, &fyear);
	}

	printf("%d/%d/%.2d is the earliest date\n", smonth, sday, syear);
	return 0;
}
