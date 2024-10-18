#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void fill(char matrix[10][10]){ int size = 10;
	for(int x = 0; x < size; x++){
		for(int y = 0; y < size; y++){
			matrix[x][y] = '.';
		}
	}
}

void showMap(char matrix[10][10]){
	int size = 10;
	for(int x = 0; x < size; x++){
		for(int y = 0; y < size; y++){
			printf("%c ", matrix[x][y]);
		}
		
		printf("\n");
	}
}

bool checkValidMv(char matrix[10][10], int x, int y){
	if(matrix[x][y] == '.'){
		if((x >= 0 && x <= 10) && (y >= 0 && y <= 10)){
			return true;	
		}
	} 

	return false;
}

int main(void){
	char map[10][10];
	int direction;
	int current_x = 0, current_y = 0;
	srand(time(NULL));

	fill(map);

	map[current_x][current_y] = 'A';
	for(int c = 1; c < 26; c++){
		direction = rand() % 4;		
		

		if(direction == 0 && checkValidMv(map, current_x-1, current_y)){
			current_x--;
		} else if(direction == 1 && checkValidMv(map, current_x, current_y-1)){
			current_y--;
		} else if(direction == 2 && checkValidMv(map, current_x+1, current_y)){
			current_x++;
		} else if(direction == 3 && checkValidMv(map, current_x, current_y+1)){
			current_y++;
		} else {
			c--;
		}

		map[current_x][current_y] = 'A' + (c % 26);
	}


	showMap(map);

	return 0;
}
