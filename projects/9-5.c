#include <stdio.h>

#define SQR_SIZE 5

void print_magic_square(int n, char magic_square[n][n]);
void create_magic_square(int n, char magic_square[n][n]);

int main(void){
	char magic_sqr[SQR_SIZE][SQR_SIZE] = {0};
	
	create_magic_square(SQR_SIZE, magic_sqr);
	print_magic_square(SQR_SIZE, magic_sqr);

	return 0;
}

void print_magic_square(int n, char magic_square[n][n]){
	for(int x = 0; x < n; x++){
		for(int y = 0; y < n; y++){
			printf("%3d", magic_square[x][y]);	
		}
		printf("\n");
	}

		printf("\n");
}

void create_magic_square(int n, char magic_square[n][n]){
	int x = n / 2, y = 0;
	int filled = 2;

	magic_square[y][x] = 1;

	while(filled < n * n + 1){
		x = (x + 1) % n;
		if(y > 0){
			y--;	
		} else {
			y = n - 1;	
		}

		if(magic_square[y][x] == 0){
			magic_square[y][x] = filled;	
		} else {
			y = (y + 2) % n;
			if(x > 0){
				x--;	
			} else {
				x = n - 1;	
			}
			magic_square[y][x] = filled;	
		}

		filled++;
	}
}
