#include <stdio.h>

int main(void){
	int height;
	int length;
	int width;

	height = 8;
	length = 12;
	width = 10;

	int volume = height * length * width;
	

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional dimensional_weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}
