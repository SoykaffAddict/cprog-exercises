#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	int array_size = 30;
	int result = 0;
	char word[array_size];	

	printf("Enter a word");
	scanf("%s", word);

	for (int i = 0; i < sizeof(word); i++){
		word[i]	= toupper(word[i]);
	}

	for (int i = 0; i < sizeof(word); i++){
		switch (word[i]){
			case 'A':	
			case 'E':	
			case 'I':	
			case 'L':	
			case 'N':	
			case 'O':	
			case 'R':	
			case 'S':	
			case 'T':	
			case 'U':	
				result += 1; break;
			case 'D':
			case 'G':
				result += 2; break;
			case 'B':
			case 'C':
			case 'M':
			case 'P':
				result += 3; break;
			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y':
				result += 4; break;
			case 'K':
				result += 5; break;
			case 'J':
			case 'X':
				result += 8; break;
			case 'Q':
			case 'Z':
				result += 10; break;
		}
	}

	printf("Scrabble value: %d\n", result);

}
