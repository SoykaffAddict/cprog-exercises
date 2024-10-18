#include <stdio.h>

int main(void){
	float comission, value;

	printf("Enter value of trade: ");
	scanf("%f", &value);

	if (value < 2500.00f){
		comission = 30.00f + .017f * value;	
	} else if (value < 6250.00f){
		comission = 56.00f + .0066 * value;	
	} else if (value < 20000.00f){
		comission = 76.00f + .0034 * value;	
	} else if (value < 50000.00f){
		comission = 100.00f + .0022 * value;	
	} else if (value < 500000.00f){
		comission = 155.00f + .0011 * value;	
	} else {
		comission = 255.00f + .0009f * value;	
	}

	if (comission < 39.00f){
		comission = 39.00f;	
	}
		
	printf("Commission: $%.2f\n", comission);

	return 0;
}
