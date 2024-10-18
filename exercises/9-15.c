#include <stdio.h>

double median(double x, double y, double z);

int main(void){
	printf("%lf\n", median(10, 7, 2));

	return 0;
}

double median(double x, double y, double z){
	double result;

	if(x <= y){
		if(y <= z) result = y;
		else if(x <= z) result = z;
		else result = x;
	} else {
		if(z <= y) result = y;
		else if(x <= z) result = x;
		else result = z;
	}

	return result;
}

