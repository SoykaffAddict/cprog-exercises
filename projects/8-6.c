#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char input[100];
	char single_c;

	printf("Enter a message: ");
	scanf("%[^\n]s", input);

	for(int i = 0; i < strlen(input); i++){
		single_c = input[i];

		switch(single_c){
			case 'a': printf("4"); break;
			case 'b': printf("8"); break;
			case 'e': printf("3"); break;
			case 'i': printf("1"); break;
			case 'o': printf("0"); break;
			case 's': printf("5"); break;
			default: printf("%c", toupper(single_c));
		}
	}
	printf("!!!!!!!!!!\n");
}
