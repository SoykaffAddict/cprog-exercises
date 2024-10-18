#include <time.h>
#include <stdio.h>
#include <stdlib.h>

double day_of_year(int month, int day, int year);

//Unfiltered user input causes error, no desire to implement.
int main(void){
	double difference;
	int month, day, year;

	printf("Enter a date in format mm/dd/yyyy: ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	difference = ((day_of_year(month, day, year) / 60 / 60) / 24) + 1;

	printf("%.0lf\n", difference);
	return 0;
}

double day_of_year(int month, int day, int year){
	double diff_t;
	int ret;
	struct tm lookup_year;
	struct tm base_year;
		
	lookup_year.tm_year = year - 1900;
	lookup_year.tm_mon = month - 1;
	lookup_year.tm_mday = day;
	lookup_year.tm_hour = 0;
	lookup_year.tm_min = 0;
	lookup_year.tm_sec = 0;
	lookup_year.tm_isdst = -1;

	base_year.tm_year = year - 1900;
	base_year.tm_mon = 1 - 1;
	base_year.tm_mday = 1;
	base_year.tm_hour = 0;
	base_year.tm_min = 0;
	base_year.tm_sec = 0;
	base_year.tm_isdst = -1;

	ret = mktime(&lookup_year);

	if(ret == -1){
		printf("Error: unable to make time using mktime\n");
		exit(2);
	}

	diff_t = difftime(mktime(&lookup_year), mktime(&base_year));

	return diff_t;
}
