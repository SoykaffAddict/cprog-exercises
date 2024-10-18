#include <stdio.h>

int count_spaces(const char *s);

int main(void)
{
	printf("%d\n", count_spaces("Hello World!"));
}

int count_spaces(const char *s)
{
	int count = 0;
	const char *p = s;

	while (*p++)
		if (*p == ' ') count++;

	return count;
}
