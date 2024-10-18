#include <stdio.h>

double triangle_area(double base, double height);

int main(void){
	printf("%lf \n", triangle_area(2.00, 3.00));
	return 0;
}

double triangle_area(double base, double height){
	double product;

	product = base * height;

	return product / 2;
}
