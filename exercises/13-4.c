#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int read_linea(char str[], int n);
int read_lineb(char str[], int n);
int read_linec(char str[], int n);
int read_lined(char str[], int n);

int main(void)
{
	char str[20];
	char *p = str;

	read_lineb(str, 20);

	while (*p) {
		if (*p == '\0')
			printf("\\0");
		else
			putchar(*p);

		p++;
	}

	//puts(str);

}

int read_linea(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i == 0 && isspace(ch))
			;
		else if (i < n)
			str[i++] = ch;
	str[i] = '\0';

	return i;
}

int read_lineb(char str[], int n)
{
	int ch, i = 0;

	while (!isspace(ch = getchar()))
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';

	return i;
}

int read_linec(char str[], int n)
{
	int ch, i = 0;

	do {
		ch = getchar();
		if (i < n)
			str[i++] = ch;
	} while (ch != '\n');
	str[i] = '\0';

	return i;
}

int read_lined(char str[], int n)
{
	int ch, i = 0;

	for (; i < n; i++) {
		ch = getchar();
		if (ch == '\n')
			break;
		str[i++] = ch;
	}
	str[i] = '\0';

	return i;
}
