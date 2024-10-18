#include <stdio.h>

#define RANGE 40

int main(void){
	int n[RANGE] = {0, 1};

	for (int i = 2; i < RANGE; i++){
		n[i] = n[i-1] + n[i-2];
	}

	for (int i = 0; i < RANGE; i++){
		printf("%d ", n[i]);
	}

	printf("\n");

	return 0;
}
