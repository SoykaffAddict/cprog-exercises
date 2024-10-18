#include <stdio.h>

int main(void){
	int x;

	printf("Enter a number: ");
	scanf("%d", &x);

	do {
		printf("%d", x % 10);
		x /= 10;
	} while (x > 0);

	printf("\n");

	return 0;
}
