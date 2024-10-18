#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void){
	bool anagram;
	int alphabet1[26] = {0};
	int alphabet2[26] = {0};


	printf("Enter the first word: ");
	read_word(alphabet1);

	printf("Enter the second word: ");
	read_word(alphabet2);

	anagram = equal_array(alphabet1, alphabet2);

	if(anagram){
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}
}

bool equal_array(int counts1[26], int counts2[26]){
	int size = 26;

	for(int i = 0; i < size; i++){
		if(counts1[i] != counts2[i]){
			return false;	
		}
	}

	return true;
}

void read_word(int counts[26]){
	int i = 0;
	int c;
	char word[50];

	scanf("%s", word);

	while(word[i] != '\0'){
		c = tolower(word[i]);
		counts[(c - 'a') % 26]++;
		i++;	
	}
}
