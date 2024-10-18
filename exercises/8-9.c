#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	float temperature_readings[30][24];
	float sum = 0;
	srand(time(NULL));

	for (int x = 0; x < 30; x++){
		for(int y = 0; y < 24; y++){
			temperature_readings[x][y] = rand() % 35 + 20;
		}
	}

	for (int x = 0; x < 30; x++){
		for(int y = 0; y < 24; y++){
			sum += temperature_readings[x][y];
		}
	}

	printf("Average temp is: %.1f °C", sum / (34 * 24));
	
	return 0;
}
