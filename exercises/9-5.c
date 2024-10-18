#include <stdio.h>

int num_digits(int n);
int num_digits2(int n);

int main(void){
	printf("%d\n", num_digits(12390950));

	return 0;
}

int num_digits(int n){
	int result = 0;

	while(n > 0){
		result++;	
		n /= 10;
	}

	return result;
}
