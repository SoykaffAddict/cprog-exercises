#include <stdio.h>

void remove_filename(char *url);

int main(void)
{
	char str[] = "http://www.knking.com/indext.html";
	//char str[] = "asfd";
	remove_filename(str);

	puts(str);

	return 0;
}

void remove_filename(char *url)
{
	char *p = url;
	char *slash;

	while (*p++)
		if (*p == '/')
			slash = p;

	if (!slash) return;

	*slash = '\0';
}
