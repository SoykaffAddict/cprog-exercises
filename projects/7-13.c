#include <stdio.h>
#include <string.h>

//Count characters
float countc(char *string){
	float result = 0;
	for(int i=0; i < strlen(string); i++){
		if (string[i] != ' '){
			result++;	
		}
	}

	return result;
}

//Word counter
float wc(char *s){
	int i, words=0;
	char sanitized_str[1000];

	//======SANITIZE=====
	for(int i=0; i < strlen(s); i++){
		if((s[i] == 32) && (s[i+1] == s[i])){
			sanitized_str[i] = s[i+1];
			i++;
		} else {
			sanitized_str[i] = s[i];
		}
	}

	if(sanitized_str[strlen(sanitized_str) -1] == 32){
		sanitized_str[strlen(sanitized_str) -1] = '\0'	;
	}
	//===================

	//=====COUNT WORDS
	for(i=0; sanitized_str[i]; i++){
		if(sanitized_str[i] == 32)	
			words++;
	}

	if(i > 0)
		words++;
	//=================
	
	return words;
}

int main(void){
	char str[1000];

	printf("Enter a phrase: ");
	scanf("%[^\n]", str);
	printf("%.1f\n", countc(str) / wc(str));

	return 0;
}
