#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MSG_SIZE 60
#define HOURS_SIZE 10
#define MINUTES_SIZE 10
#define TIME_SIZE 5
#define MAX_REMIND 60

struct reminder {
	int month;
	int day;
	char message[MSG_SIZE+1];
};
typedef struct reminder Reminder;

bool get_date(Reminder *rmd);
int date_days(Reminder *rmd);
void get_full_msg(Reminder *rmd);
int compare(const void *a, const void *b);

int main(void)
{
	Reminder rmd = {.day = 0, .month = 0, .message = {0}};
	Reminder list[MAX_REMIND];
	int n_rmd = 0;

	while (true) {
		printf("Enter day/month - message: ");
		if (get_date(&rmd) == 0) break;

		if (n_rmd == MAX_REMIND) {
			printf("-- Out of space --\n");
			break;
		}

		if (rmd.day < 0 || rmd.day > 31) {
			puts("Invalid input! Try again.");
			continue;
		} else if (rmd.month < 0 || rmd.month > 12) {
			puts("Invalid input! Try again.");
			continue;
		}

		list[n_rmd] = rmd;
		n_rmd++;
	}

	qsort(list, n_rmd, sizeof(Reminder), compare);

	printf("\n========REMINDERS========\n");
	for (int i = 0; i < n_rmd; i++) {
		get_full_msg(&list[i]);
	}

	return 0;
}

int compare(const void *a, const void *b)
{
	Reminder *rmdA = (Reminder*)a;
	Reminder *rmdB = (Reminder*)b;

	int time_a = date_days(rmdA);
	int time_b = date_days(rmdB);

	return (time_a > time_b) - (time_a < time_b);
}

void get_full_msg(Reminder *rmd) {
	int dt = rmd->day;
	int mnt = rmd->month;
	char msg[MSG_SIZE+1], *mp = rmd->message;
	strncpy(msg, mp, MSG_SIZE);
	printf("%4d/%d - %s\n", dt, mnt, msg);
}

int date_days(Reminder *rmd)
{
	struct tm start_tm = {
		.tm_year = 0,
		.tm_mon = 0,
		.tm_mday = 0,
	};

	struct tm end_tm = {
		.tm_year = 0,
		.tm_mon = rmd->month - 1,
		.tm_mday = rmd->day,
	};
	
	int start_in_sec = mktime(&start_tm);
	int end_in_sec = mktime(&end_tm);

	int diff_in_sec = difftime(end_in_sec, start_in_sec);
	int diff_in_days = diff_in_sec / 60 / 60 / 24;

	return diff_in_days;
}

bool get_date(Reminder *rmd)
{
	char input[MSG_SIZE];
	fgets(input, MSG_SIZE, stdin);
	input[strcspn(input, "\n")] = 0;

	int day, month;
	char msg[MSG_SIZE];
	int n_scan = sscanf(input, "%d/%d - %s", &day, &month, msg);

	rmd->day = day;
	rmd->month = month;
	strcpy(rmd->message, msg);

	if (day == 0) 
		return false;
	else if (n_scan != 3)
		exit(EXIT_FAILURE);

	return true;
}
