#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

void fill(char matrix[10][10]){ 
	int size = 10;

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
			printf("%c ", matrix[y][x]);
		}
		
		printf("\n");
	}
}

bool checkInLimit(char matrix[10][10], int x, int y){
		if((x >= 0 && x <= 10) && (y >= 0 && y <= 10)){
			return true;	
		}

	return false;
}

bool checkOccupied(char matrix[10][10], int x, int y){
	if(matrix[x][y] == '.'){
		return false;
	} 

	return true;
}

bool checkOccupiedAround(char matrix[10][10], int x, int y){
	if(	checkOccupied(matrix, x-1, y) && 
		checkOccupied(matrix, x+1, y) && 
		checkOccupied(matrix, x, y-1) && 
		checkOccupied(matrix, x, y+1)){
	
		return true;	
	}

	return false;
}
	

int main(void){
	char map[10][10];
	int direction;
	int current_x = 0, current_y = 0;
	bool invalid;
	srand(time(NULL));

	fill(map);

	map[current_x][current_y] = 'A';
	for(int c = 1; c < 26; c++){
		direction = rand() % 4;		
		
		switch(direction){
			case 0: 
				if(checkInLimit(map, current_x-1, current_y)){
					if(!checkOccupied(map, current_x-1, current_y)){
						current_x--;
					} else {
						if(checkOccupiedAround(map, current_x, current_y)){
							invalid = true;	
						} else {
							c--;
						}
					}
				} else {
					c--;	
				}

				break;

			case 1: 
				if(checkInLimit(map, current_x+1, current_y)){
					if(!checkOccupied(map, current_x+1, current_y)){
						current_x++;
					} else {
						if(checkOccupiedAround(map, current_x, current_y)){
							invalid = true;	
						} else {
							c--;
						}
					}
				} else {
					c--;	
				}

				break;
			case 2: 
				if(checkInLimit(map, current_x, current_y-1)){
					if(!checkOccupied(map, current_x, current_y-1)){
						current_y--;
					} else {
						if(checkOccupiedAround(map, current_x, current_y)){
							invalid = true;	
						} else {
							c--;
						}
					}
				} else {
					c--;	
				}

				break;
			case 3: 
				if(checkInLimit(map, current_x, current_y+1)){
					if(!checkOccupied(map, current_x, current_y+1)){
						current_y++;
					} else {
						if(checkOccupiedAround(map, current_x, current_y)){
							invalid = true;	
						} else {
							c--;
						}
					}
				} else {
					c--;	
				}

				break;
		}

		if(invalid)
			break;

		map[current_x][current_y] = 'A' + (c % 26);
		showMap(map);
		printf("Current X: %d\n", current_x+1);
		printf("Current Y: %d\n", current_y+1);
	}



	return 0;
}
