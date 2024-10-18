#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
	bool anagram = true;
	char word1[50];
	char word2[50];
	char c;
	int alphabet[26] = {0};
	int i;

	printf("Enter the first word: ");
	scanf("%s", word1);

	printf("Enter the second word: ");
	scanf("%s", word2);

	i = 0;
	while(word1[i] != '\0'){
		c = tolower(word1[i]);
		alphabet[(c - 'a') % 26]++;
		i++;	
	}

	i = 0;
	while(word2[i] != '\0'){
		c = tolower(word2[i]);
		alphabet[(c - 'a') % 26]--;
		i++;	
	}

	for(i = 0; i < sizeof(alphabet) / sizeof(alphabet[0]); i++){
		if(alphabet[i] != 0){
			anagram = false;		
			break;
		}
	}

	if(anagram){
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}
}

