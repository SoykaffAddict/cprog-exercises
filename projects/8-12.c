#include <stdio.h>
#include <ctype.h>

int main(void){
	int scrabble_values[] = { 1, 3, 3, 2, 1, 4, 2, 4, 
							1, 8, 5, 1, 3, 1, 1, 3, 10, 
							1, 1, 1, 1, 4, 4, 8, 4, 10};
	char input[100];
	int result;
	int c=0;

	printf("Enter a word: ");
	scanf("%s", input);

	while(input[c] != '\0'){
		if(!isalpha(input[c])){
			printf("Invalid input, not all chars are alpha\n")	;
			return 1;
		}

		result += scrabble_values[(toupper(input[c]) - 'A') % 26];
		c++;	
	}

	printf("Scrabble value: %d", result);

	return 0;
}
