#include <stdio.h>
#define A 010e2
#define B 32.1e+5
#define C 0790		//Wrong, 9 in octal base doesn't exists
#define D 100_000   //Underline is invalid in numbers
#define E 3.978e-2

int main(void){
	printf("%f\n", A);
	printf("%f\n", B);
	printf("%d\n", C);
	printf("%f\n", D);
	printf("%f\n", E);
	
}
