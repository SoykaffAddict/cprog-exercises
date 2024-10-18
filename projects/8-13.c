#include <stdio.h>

int main(void){
	char name_initial[1];
	char name[20];
	
	printf("Enter a first and last name: ");
	scanf(" %s %s", name_initial, name );

	printf("You entered the name: %s %c.\n", name, name_initial[0]);
	
}
