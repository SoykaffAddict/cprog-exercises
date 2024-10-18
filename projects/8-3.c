#include <stdio.h>
#include <stdbool.h>

int main(void){
	bool digit_seen[10] = {false};
	int digit;
	char n[100];

	printf("Enter a number: ");
	scanf("%s", n);

	printf("Repeated digit(s): ");

	for(int i = 0; i < 100; i++){
		digit = n[i];

		if(digit == ' ')
			continue;

		if(digit_seen[digit - '0']){
			printf("%c ", digit);
		}

		digit_seen[digit - '0'] = true;
	}

	printf("\n");

	return 0;
}
