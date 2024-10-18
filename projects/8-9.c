#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void fillMap(char matrix[10][10]){
	for(int x = 0; x < 10; x++){
		for(int y = 0; y < 10; y++)	{
			matrix[x][y] = '.';
		}
	}
}

void showMap(char matrix[10][10]){
	for(int x = 0; x < 10; x++){
		for(int y = 0; y < 10; y++)	{
			printf("%c ", matrix[x][y]);
		}

		printf("\n");
	}
}

bool checkInLimits(int x, int y){
	if(	(x >= 0 && x < 10) && 
		(y >= 0 && y < 10)){
		return true;	
	}
	
	return false;
}

bool checkUnfilled(char matrix[10][10], int x, int y){
	if(matrix[x][y] == '.'){
		return true;	
	}

	return false;
}

bool checkLocked(char matrix[10][10], int x, int y){
	if(	(x == 0 || !checkUnfilled(matrix, x-1, y))	&&
		(x == 10-1 || !checkUnfilled(matrix, x+1, y))	&&
		(y == 0 || !checkUnfilled(matrix, x, y-1))	&&
		(y == 10-1 || !checkUnfilled(matrix, x, y+1))){
	
		return true;
	}

	return false;
}

int main(void){
	char map[10][10];
	char alphadigit = 0;
	int current_x = 0, current_y = 0;
	int direction;
	bool locked = 0;
	srand(time(NULL));

	fillMap(map);

	while(alphadigit < 26 && !locked){
		map[current_x][current_y] = alphadigit + 'A';
		direction = rand() % 4;

		switch(direction){
			case 0:	
				if(	checkInLimits(current_x-1, current_y)){
					if(checkUnfilled(map, current_x-1, current_y)){
						current_x--;	
						alphadigit++;
					} else {
						if(checkLocked(map, current_x, current_y))
							locked = 1;	
					}
				} 

				break;

			case 1:	
				if(	checkInLimits(current_x+1, current_y)){
					if(checkUnfilled(map, current_x+1, current_y)){
						current_x++;	
						alphadigit++;
					} else {
						if(checkLocked(map, current_x, current_y))
							locked = 1;	
					}

				} 

				break;

			case 2:	
				if(	checkInLimits(current_x, current_y-1)){
					if(checkUnfilled(map, current_x, current_y-1)){
						current_y--;	
						alphadigit++;
					} else {
						if(checkLocked(map, current_x, current_y))
							locked = 1;	
					}

				} 

				break;

			case 3:	
				if(	checkInLimits(current_x, current_y+1)){
					if(checkUnfilled(map, current_x, current_y+1)){
						current_y++;
						alphadigit++;
					} else {
						if(checkLocked(map, current_x, current_y))
							locked = 1;	
					}

				} 

				break;
		}

	}

	showMap(map);
}
