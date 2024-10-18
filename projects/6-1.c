#include <stdio.h>
#include <stdbool.h>

int main(void){
	float n;
	float larger = false;

	do {
		printf("Enter a number: ");
		scanf("%f", &n);

		if ((n > larger || larger == false) && n != 0){
			larger = n;	
		} 
	} while (n != 0);

	printf("The largest number entered was %.2f", larger);
	
}
