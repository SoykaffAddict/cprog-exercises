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
	
		for (char *p = &board[0][0]; p <= &board[y-1][x-1]; p++) {
			switch(*p){
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

	return result;
}
