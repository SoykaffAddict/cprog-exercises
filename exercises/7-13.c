#include <stdio.h>

int main(void){
	char c = '\1';
	short s = 2;
	int i = -3;
	long m = 5;
	float f = 6.5f;
	double d = 7.5;

	printf("%c\n", c);
	printf("%d\n", s);
	printf("%d\n", i);
	printf("%ld\n", m);
	printf("%f\n", f);
	printf("%f\n", d);

	printf("============\n");

	printf("%d\n", c * i);
	printf("%ld\n", s + m);
	printf("%f\n", f / c);
	printf("%f\n", d / s);
	printf("%f\n", f - d);
	printf("%d\n", (int) f);
}
