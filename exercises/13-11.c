#include <stdio.h>
#include <string.h>

int strcmpp(char *s, char *t);

int main(void)
{
	printf("%d\n", strcmpp("Helloa", "Hellob"));
}

int strcmpp(char *s, char *t)
{
	char *p;
	char *tp;

	if (strlen(s) > strlen(t)) {
		p = s;
		tp = t;
	} else {
		p = t;
		tp = s;
	}

	while (*p) {
		if (*p != *tp)
			return *p - *tp;

		p++;
		tp++;
	}

	return 0;
}
