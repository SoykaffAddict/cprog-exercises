#include <stdio.h>
#include <stdbool.h>

bool inRange(int x, int y, int n);

int main(void){
	int input;

	printf("Input a number: ");
	scanf("%d", &input);

	printf("In range: %d", inRange(13, 20, input));
	return 0;
}

bool inRange(int x, int y, int n){
	return (x > 0 && x < n) && (y > 0 && y < n);
}
