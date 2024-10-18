/* Asks user to guess a hidden number */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_NUMBER 100

/* External variable */
int secret_number;

/* prototypes */
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(int secret_number);

int main(void){
	char command;

	printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
	initialize_number_generator();

	do {
		choose_new_secret_number();	
		printf("A new number has been chose.\n");
		read_guesses(secret_number);
		printf("Play Again? [Y/N] ");
		scanf(" %c", &command);
		printf("\n");
	} while(command == 'y' || command == 'Y');

	return 0;
}

/*************************************************************
* initialize_number_generator:	Initializes the random		 *
*								number generator using		 *
*								the time of day.			 *	
**************************************************************/

void initialize_number_generator(void){
	srand((unsigned) time(NULL));
}


/*************************************************************
* choose_new_secret_number:		Randomly selects a number	 *
*								between 1 and MAX_NUMBER and *
*								stores in in secret_number	 *	
**************************************************************/

void choose_new_secret_number(void){
	secret_number = rand() % MAX_NUMBER + 1;
}


/*************************************************************
* read_guesses:	Repeatedly read user guesses and tells		 *
*				the user whether each guess is too low,		 *
*				too high, or correct. When the guess is		 *
*				correct, prints the total number of			 *
*				guesses and returns.						 *
**************************************************************/

void read_guesses(int secret_number){
	int guess, num_guesses = 0;

	while(true){
		num_guesses++;			

		printf("Enter guess: ");
		scanf("%d", &guess);

		if(guess == secret_number){
			printf("You won in %d guesses!\n\n", num_guesses);
			return;
		} else if(guess < secret_number)
			printf("Too low; try again.\n");
		else
			printf("Too high; try again.\n");
	}
}
