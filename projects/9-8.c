#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void){
	int wins = 0;
	int losses = 0;
	char play_again = 'Y';


	while(play_again == 'Y'){
		int win = play_game();

		if(win){
			wins++;	
		} else {
			losses++;	
		}

		printf("\nPlay again? ");
		scanf(" %c", &play_again);
		play_again = toupper(play_again);
	}

	printf("Wins: %d\t Losses: %d\n", wins, losses);

}

int roll_dice(void){
	struct timespec time;
	clock_gettime(CLOCK_REALTIME, &time);

	srandom(time.tv_nsec);

    const int dice1 = random() % 6 + 1;
    const int dice2 = random() % 6 + 1;

	return dice1 + dice2;
}

bool play_game(void){
	int d = roll_dice();
	int point;
	printf("You rolled: %d\n", d);
	
	switch(d){
		case 7: case 11:
			printf("You Win!\n");
			return true;
		case 2: case 3: case 12:
			printf("You Lose!\n");
			return false;
		default:
			point = d;
			printf("Your point is %d\n", point);

			while(true){
				d = roll_dice();	
				printf("You rolled: %d\n", d);

				if(d == point){
					printf("You Win!\n");
					return true;
				} else if(d == 7){
					printf("You Lose!\n");
					return false;
				}
			}
	}
}
