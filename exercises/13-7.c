#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "word";
	//*str = 0;
	//str[0] = '\0';
	//strcpy(str, "");
	strcat(str, "");

	puts(str);
}
