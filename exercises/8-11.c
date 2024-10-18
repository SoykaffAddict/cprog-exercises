#include <stdio.h>

int main(void){
	char checker_board[8][8];

	for(int x = 0; x < 8; x++){
		for(int y = 0; y < 8; y++){
			if((x + y) % 2 == 0){
				checker_board[x][y] = 'B';
			} else {
				checker_board[x][y] = 'R';
			}
		}
	}

	for(int x = 0; x < 8; x++){
		for(int y = 0; y < 8; y++){
			printf("%c ", checker_board[x][y]);
		}

		printf("\n");
	}

	printf("\n");

	return 0;
}
