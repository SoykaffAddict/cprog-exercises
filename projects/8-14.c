#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char* str) {

    // Initialize start and end pointers
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    // Swap characters while start is less than end
    while (start < end) {
      
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers
        start++;
        end--;
    }
}

int main(void){
	char sentence[50];
	char result[50];
	
	printf("Enter a sentence: ");
	fgets(sentence, 50, stdin);
	sentence[strcspn(sentence, "\r\n")] = 0;

	reverseString(sentence);

	char *token = strtok(sentence, " ");
	while (token != NULL){
		reverseString(token);
		strcat(result, token);
		strcat(result, " ");
		token = strtok(NULL, " ");
	}
	printf("Reversal of sentence: %s\n", result);

	return 0;
}
