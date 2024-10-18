#include <stdio.h>

int main(void){
	int a = 42;

	printf("%d\n", 9 - ((a - 1) % 10));
	printf("%d\n", (10 - (a % 10)) % 10);
}
