#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
bool straight, flush, four, three;

int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int rank_arr[], int suit_arr[]);
void analyze_hand(int rank_arr[], int suit_arr[]);
void print_result(void);

/***********************************************************
* main : Calls read_cards, analyze_hand, and print_result  *
*        repeatedly.                                       *
***********************************************************/

int main(void){
	int rank_arr[NUM_RANKS];
	int suit_arr[NUM_SUITS];

	while(true){
		read_cards(rank_arr, suit_arr);	
		analyze_hand(rank_arr, suit_arr);
		print_result();
	}
}


/***********************************************************
* read_cards: Reads the cards into the external variables  *
*             rank_arr and suit_arr; checks for bad  *
*             cards and duplicate cards.                   *
***********************************************************/

void read_cards(int rank_arr[], int suit_arr[]){
	bool card_exits[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;

	for(rank = 0; rank < NUM_RANKS; rank++){
		rank_arr[rank] = 0;
		for(suit = 0; suit < NUM_SUITS; suit++)
			card_exits[rank][suit] = false;
	}

	for(suit = 0; suit < NUM_SUITS; suit++)
		suit_arr[suit] = 0;

	while(cards_read < NUM_CARDS){
			bad_card = false;	

		printf("Enter a card: ");
		rank_ch = getchar();

		switch(rank_ch){
			case '0':			exit(EXIT_SUCCESS);
			case '2':			rank = 0; break;
			case '3':			rank = 1; break;
			case '4':			rank = 2; break;
			case '5':			rank = 3; break;
			case '6':			rank = 4; break;
			case '7':			rank = 5; break;
			case '8':			rank = 6; break;
			case '9':			rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default:			bad_card = true;
		}

		suit_ch = getchar();
		switch(suit_ch){
			case 'c': case 'C': suit = 0; break;
			case 'd': case 'D': suit = 1; break;
			case 'h': case 'H': suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default:			bad_card = true;
		}

		while((ch = getchar()) != '\n'){
			if(ch != ' ') bad_card = true;
		}

		if(bad_card){
			printf("Bad card; ignored.\n");
		} else if (card_exits[rank][suit]){
			printf("Duplicate card; ignored.\n");
		} else {
			rank_arr[rank]++;
			suit_arr[suit]++;
			card_exits[rank][suit] = true;
			cards_read++;
		}
	}
}

/***********************************************************
* analyze_hand: Determines wheter the hand contains a      *
*				straight, a flush, four-of-a-kind, and/or  *
*				three-of-a-kind; determines the number of  *
*				pairs; stores the results into the         *
*				external variables straight, flush, four,  *
*				three, and pairs.                          *
***********************************************************/
void analyze_hand(int rank_arr[], int suit_arr[]){
	int num_consec = 0;
	int rank, suit;
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	/* checks for flush */
	for(suit = 0; suit < NUM_SUITS; suit++){
		if(suit_arr[suit] == NUM_CARDS){
			flush = true;	
		}
	}

	/* checks for straight */
	rank = 0;
	while(rank_arr[rank] == 0) rank++;
	for(; rank < NUM_RANKS && rank_arr[rank] > 0; rank++){
		num_consec++;
	}

	if(num_consec == NUM_CARDS){
		straight = true;	
		return;
	}

	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	for(rank = 0; rank < NUM_RANKS; rank++){
		if(rank_arr[rank] == 4) four = true;
		if(rank_arr[rank] == 3) three = true;
		if(rank_arr[rank] == 2) pairs++;
	}
}

/***********************************************************
* print_result: Prints the classification of the hand,     *
*             based on the values of the external          *
*             variables straight, flush, four three,       *
*             and pairs.                                   *
***********************************************************/

void print_result(void){
	if(straight && flush)	printf("Straight flush");
	else if(four)			printf("Four of a kind");
	else if(three &&
			pairs == 1)		printf("Full house");
	else if(flush)			printf("Flush");
	else if(straight)		printf("Straight");
	else if(three)			printf("Three");
	else if(pairs == 2)		printf("Two pairs");
	else if(pairs == 1)		printf("Pair");
	else					printf("High card");

	printf("\n\n");
}

