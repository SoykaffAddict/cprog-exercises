#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[20], s2[20];

	strcpy(s1, "computer");
	strcpy(s2, "science");
	printf("%d\n", strcmp(s1, s2));

	if (strcmp(s1, s2) < 0)
		strcat(s1, s2);
	else
		strcat(s2, s1);
	s1[strlen(s1)-6] = '\0';
	
	puts(s1);
	puts(s2);
}
