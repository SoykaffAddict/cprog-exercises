#include <stdio.h>

int gcd(int m, int n);

int main(void){
	printf("%d\n", gcd(12, 28));

	return 0;
}

int gcd(int m, int n){
	if(m == 0) return n;
	if(n == 0) return m;
	if(m == n) return m;
	if(m > n) return gcd(m - n, n);

	return gcd(m, n - m);
}
