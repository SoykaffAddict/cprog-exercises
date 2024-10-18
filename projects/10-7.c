#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define DIGIT_SIZE 4

void clear_digits_array(void);
void print_digits_array(void);
void process_digit(int digit, int position);

char digits_arr[DIGIT_SIZE][MAX_DIGITS * DIGIT_SIZE];

int main(void)
{
	clear_digits_array();

	printf("Enter a number: ");

	char c;
	int pos = 0;
	while ((c = getchar()) != '\n') {
		if (isdigit(c))	{
			process_digit((c - '0'), pos);
			pos++;
		} 

	}

	print_digits_array();

	return 0;
}

void process_digit(int digit, int position)
{
	const int segments[][7] =	{
						{1, 1, 1, 1, 1, 1},
						{0, 1, 1},
						{1, 1, 0, 1, 1, 0, 1},
						{1, 1, 1, 1, 0, 0, 1},
						{0, 1, 1, 0, 0, 1, 1},
						{1, 0, 1, 1, 0, 1, 1},
						{1, 0, 1, 1, 1, 1, 1},
						{1, 1, 1},
						{1, 1, 1, 1, 1, 1, 1},
						{1, 1, 1, 1, 0, 1, 1},
					};
	for(int x = 0; x < 7; x++){
		if(segments[digit][x] == 1) {
			switch (x) {
				case 0:	
					digits_arr[position * 4 + 1][0] = '_';
					break;
				case 1:	
					digits_arr[position * 4 + 2][1] = '|';
					break;
				case 2:	
					digits_arr[position * 4 + 2][2] = '|';
					break;
				case 3:	
					digits_arr[position * 4 + 1][2] = '_';
					break;
				case 4:	
					digits_arr[position * 4 + 0][2] = '|';
					break;
				case 5:	
					digits_arr[position * 4 + 0][1] = '|';
					break;
				case 6:	
					digits_arr[position * 4 + 1][1] = '_';
					break;
			}
		}
	}
}

void clear_digits_array(void)
{
	for (int i = 0; i < DIGIT_SIZE; i++) {
		for(int j = 0; j < MAX_DIGITS * DIGIT_SIZE; j++) {
			digits_arr[j][i] = ' ';
		}
	}

}

void print_digits_array(void)
{
	for (int i = 0; i < DIGIT_SIZE - 1; i++) {
		for(int j = 0; j < MAX_DIGITS * DIGIT_SIZE; j++) {
			printf("%c", digits_arr[j][i]);
		}
		printf(" \n");
	}
}
