#include <stdio.h>

int main(void){
	int rows[5] = {0};
	int cols[5] = {0}; 
	int grades[5][5] =	{
							{8, 3, 9, 0, 10},
							{3, 5, 17, 1, 1},
							{2, 8, 6, 23, 1},
							{15, 7, 3, 2, 9},
							{6, 14, 2, 6, 0},
						};

	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5; y++){
			rows[x]	+= grades[x][y];
		}
	}

	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5; y++){
			cols[x]	+= grades[y][x];
		}
	}

	printf("Row totals: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", rows[i]);
	}
	printf("\n");

	printf("Column totals: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", cols[i]);
	}
	printf("\n");

	return 0;
}
