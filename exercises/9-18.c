#include <stdio.h>
#include <math.h>

int gcd(int m, int n);

int main(void){
	printf("%d\n", gcd(10, 15));

}

int gcd(int m, int n){
	return n == 0 ? m : gcd(n, m % n);
}
