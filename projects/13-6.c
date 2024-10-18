#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_PLANETS 9

char *lowercase(char *str);

int main(int argc, char *argv[])
{
	char *planets[] =	{
					"Mercury", "Venus", "Earth", 
					"Mars", "Jupiter", "Saturn", 
					"Uranus", "Neptune", "Pluto", 
				};
	int i, j;
	char *l_args, *l_planets;

	for (i = 1; i < argc; i++) {
		for (j = 0; j < NUM_PLANETS; j++) {
			l_args = lowercase(argv[i]);
			l_planets = lowercase(planets[j]);

			if (strcmp(l_args, l_planets) == 0) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		}

		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}
	free(l_args);
	free(l_planets);

	return 0;
}

char *lowercase(char *str)
{
	char *buffer = (char*) malloc((strlen(str) + 1) * sizeof(char));
	char *bptr = buffer;

	for (int i = 0; i < (int) strlen(str) + 1; i++) {
		*bptr = tolower(str[i]);
		bptr++;
	}

	return buffer;
}
