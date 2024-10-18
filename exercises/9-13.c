#include <stdio.h>

int evaluate_position(int x, int y, char board[y][x]);

int main(void){
	char board[][8] =	{
							{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
							{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
							{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
							{' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},	
							{' ', ' ', ' ', 'p', ' ', ' ', ' ', ' '},	
							{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
							{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
							{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
						};
	int result = evaluate_position(8, 8, board);

	printf("%d", result);



	return 0;
}

int evaluate_position(int x, int y, char board[y][x]){
	int result = 0;

	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			switch(board[i][j]){
				case 'Q': result += 9; break;
				case 'R': result += 5; break;
				case 'B': result += 3; break;
				case 'N': result += 3; break;
				case 'P': result += 1; break;
				case 'q': result -= 9; break;
				case 'r': result -= 5; break;
				case 'b': result -= 3; break;
				case 'n': result -= 3; break;
				case 'p': result -= 1; break;
			}
		}
	}

	return result;
}
