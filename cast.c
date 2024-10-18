#include <stdio.h>

int main(void){
	float f=3.14159, frac_part;

	frac_part = f - (int) f;

	printf("%f", frac_part);
}
