#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_REMIND 50
#define MSG_LEN 60
#define SDAY 3
#define DECIMAL 10

int main(void)
{
	char reminders[MAX_REMIND][MSG_LEN+3] = {0};
	char input[MSG_LEN+1];
	int n_remind = 0;
	char day[SDAY];
	int iday;

	while (true) {
		// Check for max reminders limit
		if (n_remind == MAX_REMIND) {
			printf("-- No space left -- \n");
			break;
		}

		// Get input
		printf("Enter day and reminder: ");
		fgets(input, MSG_LEN, stdin);
		input[strcspn(input, "\n")] = 0;

		// format input
		sprintf(day, "%.2s", input);
		iday = strtol(day, NULL, DECIMAL);

		// Exit if day is not a number
		if (!iday) {
			break;
		} else if (iday < 0 || iday > 31) {
			puts("Invalid input! Try again.");
			continue;
		}

		strncpy(reminders[iday], day, SDAY);
		strcat(reminders[iday], "  ");
		strncat(reminders[iday], input + SDAY, MAX_REMIND);

		n_remind++;
	}

	printf("\nDay Reminder\n");
	for (int i = 0; i < MAX_REMIND; i++)
		if(reminders[i][0])
			printf("%s\n", reminders[i]);

	return 0;
}
