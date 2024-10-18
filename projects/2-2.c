#include <stdio.h>
#include <math.h>

int main(void){
	float rad = 10;
	float v = 4.0f / 3.0f * M_PI * (rad * rad * rad);

	printf("%.2f\n", v);
}
