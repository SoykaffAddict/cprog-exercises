#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool text_extension(const char *file_name, const char *extension);
void get_extension(const char *file_name, char *extension);
void capitalize(char string[]);

int main(void)
{
	bool result = text_extension("memo.xyz", "xyz");

	printf("%d\n", result);
}

bool text_extension(const char *file_name, const char *extension)
{
	char file_extension[4];
	char ext[4];
	strcpy(ext, extension);

	get_extension(file_name, file_extension);

	capitalize(file_extension);
	capitalize(ext);

	return strcmp(ext, file_extension) == 0;
}

void get_extension(const char *file_name, char *extension)
{
	const char *sp = file_name;
	const char *fdot;
	char *ep = extension;

	while (*sp++) {
		if (*sp == '.') {
			fdot = sp;
		}
	}
	fdot++;

	while (*fdot) {
		*ep = *fdot;

		fdot++;
		ep++;
	}
}

void capitalize(char string[])
{
	char *p = string;

	while (*p) {
		*p = toupper(*p);
		p++;
	}
}
