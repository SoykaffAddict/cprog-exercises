#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//24 hours format conversion to minutes
int time24M(int hour, int minutes){
	return (hour * 60) + minutes;
}

//12 hours format conversion to minutes
int time12M(int hour, int minutes, char period){
	if(period == 'A' || hour == 12){
		return (hour * 60) + minutes;
	} else if (period == 'P'){
		return (((hour % 12) + 12) * 60) + minutes;
	}


	return 0;
}

int main(void){
	char departure_times[][30] =	{	
										{8, 0, 'A'},
										{9, 43, 'A'},
										{11, 19, 'A'},
										{12, 47, 'P'},
										{2, 0, 'P'},
										{3, 45, 'P'},
										{7, 0, 'P'},
										{9, 45, 'P'}
									};

	char arrival_times[][30] =		{	
										{10, 16, 'A'},
										{11, 52, 'A'},
										{1, 31, 'P'},
										{3, 0, 'P'},
										{4, 8, 'P'},
										{5, 55, 'P'},
										{9, 20, 'P'},
										{11, 58, 'P'}
									};
	int hour, minutes;
	int departure;
	char formated_departure[100], formated_arrival[100];
	char rows = sizeof(departure_times) / sizeof(departure_times[0]);

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minutes);

	for(int i = 0; i < rows; i++){
		departure = time12M(departure_times[i][0],
							departure_times[i][1], 
							departure_times[i][2]);

		if(departure > time24M(hour, minutes))  {
			sprintf(formated_departure, "%.2d:%.2d %cM", departure_times[i][0],
														departure_times[i][1], 
														departure_times[i][2]);

			sprintf(formated_arrival, "%.2d:%.2d %cM", arrival_times[i][0],
														arrival_times[i][1],
														arrival_times[i][2]);

			printf("Closest departure time is %s, arriving at %s.", 
															formated_departure, 
															formated_arrival);

			break;
		}
	}

	return 0;
}
