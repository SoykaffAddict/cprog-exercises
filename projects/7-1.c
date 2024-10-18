#include <stdio.h>

int main(void){
	long int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &n);

	for (i = 1; i * i > 0; i++)
		printf("%10ld%10ld\n", i, i * i);

	printf("%ld\n", i);
	return 0;
}
