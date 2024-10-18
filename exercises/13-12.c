#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
	char ext[4];
	get_extension("Hello.tar.gz\n", ext);
	puts(ext);

	return 0;
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
