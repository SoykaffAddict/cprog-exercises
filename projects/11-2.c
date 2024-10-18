#include <stdio.h>
#include <string.h>

// Function prototypes
void
find_closest_flight(int desire_time, int *departure_time, int *arrival_time);

int 
htm(int hour, int minutes);

void 
fmt_time(char *buffer, int time_in_minutes);

int main(void){
	// Time input
	int hour, minutes, time_in_minutes;
	printf("Enter a 24-hour time: ");
	scanf(" %d:%d", &hour, &minutes);
	time_in_minutes = htm(hour, minutes);

	// Time search
	int clst_depart, clst_arrival;
	find_closest_flight(time_in_minutes, &clst_depart, &clst_arrival);

	// Resulting time formating
	char output_start[] = "Closest departure time is:";
	char fmt_dpt[30], fmt_arrv[30];
	fmt_time(fmt_dpt, clst_depart);
	fmt_time(fmt_arrv, clst_arrival);

	printf("%s %s, arriving at %s.\n", output_start, fmt_dpt, fmt_arrv);

	return 0;
}

/***********************************************************
* fmt_time: Converts the time specified in minutes to      * 
            12-hour format and writes it on a string       *
            buffer.                                        *
************************************************************/
void fmt_time(char *buffer, int time_in_minutes) 
{
	int total_hours = time_in_minutes / 60;
	int minutes = time_in_minutes % 60;
	char period[] = "AM";

	if (total_hours > 12) {
		total_hours = (total_hours % 12);
		strcpy(period, "PM");
	}

	sprintf(buffer, "%.2d:%.2d %s", total_hours, minutes, period);
}

/***********************************************************
* htm: Returns a 24 hour time in minutes.                  *
************************************************************/
int htm(int hour, int minutes){
	return (hour * 60) + minutes;
}

/***********************************************************
* find_closest_flight: Writes on departure_time and        *
*                      arrival_time the time in minutes    *
*                      based on the table from exercise    *
*                      5-8.                                *
************************************************************/
void 
find_closest_flight(int desire_time, int *departure_time, int *arrival_time)
{
	int flights[][2] =	{
					{htm(8, 0),	htm(10, 16)},
					{htm(9, 43),	htm(11, 52)},
					{htm(11, 19),	htm(13, 31)},
					{htm(12, 47),	htm(15, 0)},
					{htm(14, 0),	htm(16, 8)},
					{htm(15, 45),	htm(17, 55)},
					{htm(19, 0),	htm(21, 20)},
					{htm(21, 45),	htm(23, 58)},
				};

	int size = sizeof(flights) / sizeof(flights[0]);

	int closest_time = desire_time;
	int position = 0;

	// Probably prone to error on last element
	// May correct the find algorithm later
	for (int i = 0; i < size; i++) {
		if (flights[i][0] > closest_time) {
			closest_time = flights[i][0];
			position = i;
			break;
		}
	}

	*departure_time = flights[position][0];
	*arrival_time = flights[position][1];
}
