#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_word(char *str, int position, char *buffer);
int count_spaces(const char *s);

int main(void)
{

	char buff[20];

	get_word("Hello World", 6, buff);

	puts(buff);
	return 0;
}

void get_word(char *string, int position, char *buffer)
{
	char str[20];
	int words = count_spaces(string);
	strcpy(str, string);

	if (position > words)
		position = words;

	char *tok = strtok(str, " ");

	for (int i = 0; i < position; i++) {
		if (!tok) exit(EXIT_FAILURE);

		tok = strtok(NULL, " ");
	}

	strcpy(buffer, tok);
}

int count_spaces(const char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		if (*s == ' ')
			count++;

	return count;
}
