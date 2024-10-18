#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	char message[80];
	char emessage[80];
	int i = 0;
	int n;

	printf("Enter a message to be encrypted: ");
	fgets(message, 80, stdin);
	message[strcspn(message, "\r\n")] = 0;

	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);

	while(message[i] != '\0'){
		if(isupper(message[i])){
			emessage[i]	= ((message[i] - 'A') + n) % 26 + 'A';
		} else if (islower(message[i])){
			emessage[i]	= ((message[i] - 'a') + n) % 26 + 'a';
		} else {
			emessage[i]	 = message[i];
		}

		i++;
	}

	printf("Encrypted message: %s\n", emessage);
}
