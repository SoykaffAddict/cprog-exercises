#include <stdio.h>
#include <string.h>

#define WORD_SIZE 20

int main(void)
{
	char smallest[WORD_SIZE+1] = {0};
	char largest[WORD_SIZE+1] = {0};
	char input[WORD_SIZE+1];
	
	do {
		printf("Enter word: ");
		scanf(" %s", input);

		if (!strlen(smallest) && !strlen(largest)) {
			strncpy(smallest, input, WORD_SIZE);
			strncpy(largest, input, WORD_SIZE);
		} else {
			if (strncmp(smallest, input, WORD_SIZE) >= 0)
				strncpy(smallest, input, WORD_SIZE);
			else if (strncmp(largest, input, WORD_SIZE) <= 0)
				strncpy(largest, input, WORD_SIZE);
		}
	} while (strlen(input) != 4);
	
	printf("Smallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);

	return 0;
}
