#include <stdio.h>

int fact(int n);

int main(void){
	printf("%d", fact(8));

	return 0;
}

int fact(int n){
	return n == 0 ? 1 : n * fact(n - 1);
}

