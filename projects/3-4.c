#include <stdio.h>

int main(void){
	int area_code, prefix, line_number;

	printf("Enter a phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &prefix, &line_number);

	printf("You entered %.3d.%.3d.%.4d\n", area_code, prefix, line_number);

	return 0;
}
