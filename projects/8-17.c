#include <stdio.h>

#define SQR_SIZE 5

void print_sqr(int sqr[SQR_SIZE][SQR_SIZE]){
	for(int x = 0; x < SQR_SIZE; x++){
		for(int y = 0; y < SQR_SIZE; y++){
			printf("%3d", sqr[x][y]);	
		}
		printf("\n");
	}

		printf("\n");
}

int main(void){
	int magic_sqr[SQR_SIZE][SQR_SIZE] = {0};
	int x = SQR_SIZE / 2, y = 0;
	int filled = 2;
	
	magic_sqr[y][x] = 1;

	while(filled < SQR_SIZE * SQR_SIZE + 1){
		x = (x + 1) % SQR_SIZE;
		if(y > 0){
			y--;	
		} else {
			y = SQR_SIZE - 1;	
		}

		if(magic_sqr[y][x] == 0){
			magic_sqr[y][x] = filled;	
		} else {
			y = (y + 2) % SQR_SIZE;
			if(x > 0){
				x--;	
			} else {
				x = SQR_SIZE - 1;	
			}
			magic_sqr[y][x] = filled;	
		}

		print_sqr(magic_sqr);
		filled++;
	}

	return 0;
}
