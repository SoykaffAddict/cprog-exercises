#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_SIZE 60
#define DATE_SIZE 2
#define TIME_SIZE 5
#define HOURS_SIZE 10
#define MINUTES_SIZE 10
#define NUM_REMIND 60

void get_date(char *date, char *time, char *remainder);
int time_min(char *string);
char *min_time(int time);

int main(void)
{
	char pd[DATE_SIZE+1] = {0}, pt[TIME_SIZE+1] = {0}, pr[MSG_SIZE+1] = {0};
	char d[DATE_SIZE+1], t[TIME_SIZE+1], r[MSG_SIZE+1];
	char reminders[NUM_REMIND] = {0};
	int n_remind = 0;

	do {
		// Check for limit
		if(n_remind == NUM_REMIND) {
			printf("-- Out of space --\n");
			break;
		}

		//get input
		printf("Enter day, time and reminder: ");
		get_date(d, t, r);

		int day = atoi(d);

		// Fill previous array if empty
		if (*pd == 0) {
			strcpy(pd, d);
			strcpy(pt, t);
			strcpy(pr, r);
		}

		// Input validation
		if (day == 0) {
			break;
		} else if (day < 0 || day > 31) {
			puts("Invalid input! Try again.");
			continue;
		}
		 
		// if lower than previous flip else copy
	} while (atoi(d) != 0);

	return 0;
}

char *min_time(int time)
{
	char hrs[HOURS_SIZE+1], min[MINUTES_SIZE+1];
	char *full_time = (char*) malloc((TIME_SIZE+1) * sizeof(char));

	snprintf(hrs, HOURS_SIZE, "%.2d", time / 60);
	snprintf(min, MINUTES_SIZE, "%.2d", time % 60);

	strcat(full_time, hrs);
	strcat(full_time, ":");
	strcat(full_time, min);

	puts(full_time);

	return full_time;
}

int time_min(char *string)
{
	char hrs[HOURS_SIZE+1], min[MINUTES_SIZE+1];
	char cpstring[MSG_SIZE+1];
	strncpy(cpstring, string, MSG_SIZE);

	char *token = strtok(cpstring, ":");
	strncpy(hrs, token, HOURS_SIZE);
	token = strtok(NULL, ":");
	strncpy(min, token, MINUTES_SIZE);

	int result = atoi(hrs) * 60 + atoi(min);

	return result;
}

void get_date(char *date, char *time, char *remainder)
{
	// User input
	char input[MSG_SIZE];
	fgets(input, MSG_SIZE, stdin);
	input[strcspn(input, "\n")] = 0;

	char tok_buff[MSG_SIZE];
	char *token = strtok(input, " ");
	strncpy(tok_buff, input, MSG_SIZE);

	char *dt = token;
	char *tm = strtok(NULL, " ");
	char *rmd = strtok(NULL, "-") + 1;
	
	strncpy(date, dt, DATE_SIZE);
	strncpy(time, tm, TIME_SIZE);
	strncpy(remainder, rmd, MSG_SIZE);
}
