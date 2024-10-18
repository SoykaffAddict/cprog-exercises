#include <stdio.h>
#include <stdbool.h>

void censor(char *str);

int main(void)
{
	char str[] = "food fool fast";
	censor(str);

	puts(str);

	return 0;
}

void censor(char *str)
{
	char *badword = "food";
	char *sp = str;
	char *tbp;
	char *tsp;
	bool match = true;

	while (*sp) {
		if (*sp == *badword) {
			match = true;
			tbp = badword;
			tsp = sp;
			while (*tbp) {
				if (*tbp != *tsp) {
					match = false;
					break;
				}

				tbp++;
				tsp++;
			}

			tbp = badword;
			tsp = sp;
			while (*tbp && match) {
				*tsp = 'x';
				tbp++;
				tsp++;
			}

		}

		sp++;
	}
}
