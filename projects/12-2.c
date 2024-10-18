#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool palindrome(char *string);
void str_filter(char *string, char *result_var);
void str_reverse(char *string, char *result_var);

int main(void)
{
	char message[100];

	printf("Enter a message: ");
	fgets(message, 100, stdin);

	if (palindrome(message))
		printf("Palindrome");
	else
		printf("Not palindrome");

}

bool palindrome(char *string)
{
	char reverse[100];
	char filtered[100];
	str_filter(string, filtered);
	str_reverse(filtered, reverse);

	if(strcmp(filtered, reverse) == 0)
		return true;

	return false;
}

void str_filter(char *string, char *result_var)
{
	char *res_p = result_var;
	for (char *p = string; p < string + strlen(string); p++) {
		if(isalpha(*p))
			*res_p++ = tolower(*p);
	}

	*res_p++ = '\0';
}


void str_reverse(char *string, char *result_var)
{
	for (char *p = string + strlen(string) - 1; p > string - 1; p--)
		*result_var++ = *p;
}
