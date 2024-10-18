#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MSG_SIZE 60
#define HOURS_SIZE 10
#define MINUTES_SIZE 10
#define TIME_SIZE 5
#define MAX_REMIND 60

struct reminder {
	int time_m;
	int date;
	char message[MSG_SIZE+1];
};
typedef struct reminder Reminder;

bool get_date(Reminder *rmd);
int time_min(char *string);
char *get_fmt_time(Reminder *rmd);
char *get_full_msg(Reminder *rmd);
int date_time_min(Reminder *rmd);
int compare(const void *a, const void *b);

int main(void)
{
	Reminder rmd = {.time_m = 0, .date = 0, .message = {0}};
	Reminder list[MAX_REMIND];
	int n_rmd = 0;

	do {
		printf("Enter [day time - message]: ");
		int code = get_date(&rmd);
		if (!code) break;

		if (n_rmd == MAX_REMIND) {
			printf("-- Out of space --\n");
			break;
		}

		if (rmd.date < 0 || rmd.date > 31) {
			puts("Invalid input! Try again.");
			continue;
		}

		printf("*****%d\n", date_time_min(&rmd));
		list[n_rmd] = rmd;
		n_rmd++;
	} while (rmd.date != 0);

	qsort(list, n_rmd, sizeof(Reminder), compare);

	printf("\n========REMINDERS========\n");
	char *ptr[MAX_REMIND];
	for (int i = 0; i < n_rmd; i++) {
		ptr[i] = get_full_msg(&list[i]);
	}

	for (int i = 0; i < n_rmd; i++) {
		free(ptr[i]);
		ptr[i] = NULL;
	}

	return 0;
}

int compare(const void *a, const void *b)
{
	Reminder *rmdA = (Reminder*)a;
	Reminder *rmdB = (Reminder*)b;

	int time_a = date_time_min(rmdA);
	int time_b = date_time_min(rmdB);

	return (time_a > time_b) - (time_a < time_b);
}

int date_time_min(Reminder *rmd)
{
	return (rmd->date * 24 * 60) + rmd->time_m;
}

char *get_full_msg(Reminder *rmd) {
	int dt = rmd->date;
	char tm[TIME_SIZE+1], *tp = get_fmt_time(rmd);
	char msg[MSG_SIZE+1], *mp = rmd->message;
	strncpy(tm, tp, TIME_SIZE);
	strncpy(msg, mp, MSG_SIZE);
	printf("%4d %s - %s\n", dt, tm, msg);

	return tp;
}

char *get_fmt_time(Reminder *rmd)
{
	int time = rmd->time_m;
	char hrs[HOURS_SIZE+1], min[MINUTES_SIZE+1];
	char *full_time = (char*) malloc((TIME_SIZE+1) * sizeof(char));

	snprintf(hrs, HOURS_SIZE, "%.2d", time / 60);
	snprintf(min, MINUTES_SIZE, "%.2d", time % 60);

	strcat(full_time, hrs);
	strcat(full_time, ":");
	strcat(full_time, min);

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

bool get_date(Reminder *rmd)
{
	// User input
	char input[MSG_SIZE];
	fgets(input, MSG_SIZE, stdin);
	input[strcspn(input, "\n")] = 0;

	char tok_buff[MSG_SIZE];
	char *token = strtok(input, " ");
	strncpy(tok_buff, input, MSG_SIZE);

	char *dt = token;
	if (atoi(dt) == 0) return false;
	char *tm = strtok(NULL, " ");
	char *msg = strtok(NULL, "-") + 1;

	rmd->time_m = time_min(tm);
	rmd->date = atoi(dt);
	strcpy(rmd->message, msg);

	return true;
}
