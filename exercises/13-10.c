#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *duplicate(const char *p);

int main(void)
{
	char str[20] = "Hello";
	char *ptr = duplicate(str);

	printf("%s\n", ptr);
	free(ptr);
}

char *duplicate(const char *p)
{
	char *q = (char *) malloc(20);
	strcpy(q, p);

	return q;
}
