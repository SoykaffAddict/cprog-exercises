#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void capitalize(char *string);

int main(int argc, char **argv)
{
	if (argc != 2)
		return EXIT_FAILURE;

	char string[20];
	strcpy(string, argv[1]);
	capitalize(string);

	printf("%s\n", string);

	return 0;
}

void capitalize(char string[])
{
	char *p = string;

	while (*p) {
		*p = toupper(*p);
		p++;
	}
}
