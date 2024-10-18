#include <stdio.h>

void fillAlphabet(char array[], int length){
	for(int i = 0; i < length; i++){
		array[i] = 'A' + i;
	}
}

int main(void){
	char alphabet[26];

	fillAlphabet(alphabet, 26);

	for(int i = 0; i < sizeof(alphabet) / sizeof(alphabet[0]); i++){
		printf("%c", alphabet[i]);
	}

	printf("\n");
	return 0;
}
