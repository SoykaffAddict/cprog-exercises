#include <stdio.h>

int num_digits(int n);
int digit(int n, int k);

int main(void){
	printf("%d\n", digit(829, 2));

	return 0;
}

int digit(int n, int k){
	int n_digits = num_digits(n);
	int result;

	if(k > n_digits) return 0;

	for(int i = 0; i < k; i++){
		result = n % 10;	
		n /= 10;
	}

	return result;
}

int num_digits(int n){
	int result = 0;

	while(n > 0){
		result++;	
		n /= 10;
	}

	return result;
}
