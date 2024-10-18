#include <stdio.h>

int power(int x, int n);

int main(void){
	printf("%d\n", power(10, 30));

	return 0;
}

int power(int x, int n){
	int r;
	if(n == 0){
		return 1;	
	} else {
		if(n % 2 == 0){
			r = power(x, n / 2);
			return  r * r;
		} else {
			return x * power(x, n - 1);
		}
	}

}
