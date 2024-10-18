#include <stdio.h>

int main(void){
	int grade;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade < 0 || grade > 100){
		printf("Error, invalid range\n");
		
		return 1;
	}
	
	if (grade < 60)
		printf("F\n");
	else if (grade < 70)
		printf("D\n");
	else if (grade < 80)
		printf("C\n");
	else if (grade < 90)
		printf("B\n");
	else 
		printf("A\n");

	return 0;
}
