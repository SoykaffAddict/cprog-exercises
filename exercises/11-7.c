#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
	int m, d;

	split_date(15, 1998, &m, &d);

	printf("%.2d:%.2d\n", d, m);

}

void split_date(int day_of_year, int year, int *month, int *day)
{
	struct tm info;
	int ret;
	char mstr[10];
	char dstr[10];

	info.tm_year = year - 1900;
	info.tm_mday = day_of_year;

	ret = mktime(&info);

	if (ret == -1) {
		printf("Error\n");
		exit(EXIT_FAILURE);
	} else {
		strftime(mstr, sizeof(mstr), "%m\n", &info);
		strftime(dstr, sizeof(dstr), "%d\n", &info);
		*month = atoi(mstr);
		*day = atoi(dstr);
	}
}
