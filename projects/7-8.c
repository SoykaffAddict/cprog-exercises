#include <stdio.h>
#include <ctype.h>

//Hour to minutes
int htm(int hour, int minutes){
	return (hour * 60) + minutes;
}

int main(void){
	int hour, minutes;
	char sufix;

	printf("Write a 12-hour time: ");
	scanf("%d:%d %c", &hour, &minutes, &sufix);

	switch (toupper(sufix)){
		case 'P':
			hour = (hour % 12) + 12;
			break;
	}
	
	if (htm(hour, minutes) < htm(8, 0)){
		printf("Closest departure time is 8:00 AM, arriving at 10:16 AM\n");
	} else if (htm(hour, minutes) < htm(9, 43)){ 
		printf("Closest departure time is 9:43 AM, arriving at 11:52 AM\n");
	} else if (htm(hour, minutes) < htm(11, 19)){ 
		printf("Closest departure time is 11:19 AM, arriving at 1:31 PM\n");
	} else if (htm(hour, minutes) < htm(12, 47)){ 
		printf("Closest departure time is 12:47 PM, arriving at 3:00 PM\n");
	} else {
		printf("No flights\n");
	}

	return 0;
}
