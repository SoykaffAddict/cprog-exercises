#include <stdio.h>

int main(void){
	char firstname[30];
   	char lastname[30];

	printf("Enter a first and last name: ");
	scanf(" %s %s", firstname, lastname);

	printf("%s, %.1s.\n", lastname, firstname);
}
