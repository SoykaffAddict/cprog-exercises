#include <stdio.h>

int main(void){
	int days, start;

	printf("Enter the number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	start = (start % 7) + 1;

	for (int i = 1; i < start; i++){
		printf("%s", "   ");
	}
	for (int i=1; i < days; i++){
		if ( (i + start - 1) % 7 == 0){
			printf("%2d\n", i);
		} else {
			printf("%2d ", i);
		}
			
	
	}
}
