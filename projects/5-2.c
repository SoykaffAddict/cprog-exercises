#include <stdio.h>
#include <string.h>

int main(void){
	int hour, minutes;
	char sufix[3];

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minutes);
	
	if (hour > 12){
		strcpy(sufix, "PM");
		hour = hour % 12;
	} else {
		strcpy(sufix, "AM");
	}

	minutes = minutes % 60;

	printf("Equivalent in 12-hour time: %.2d:%.2d  %s\n", hour, minutes, sufix);

}
