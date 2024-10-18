#include <stdio.h>
#include <ctype.h>

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

	printf("24-hour time: %.2d:%.2d", hour, minutes);
}
