#include <stdio.h>
#include <stdbool.h>

int main(void){
	int age=15;
	bool teenager;

	teenager = age >= 13 && age <= 19 ? true : false;

	printf("%d\t%d\n", teenager, age);

	return 0;
}
