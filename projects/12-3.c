#include <stdio.h>
#include <string.h>

void str_reverse(char *string, char *result_var);

int main(void)
{
	char result_str[20];

	str_reverse("Hello World!", result_str);
	printf("%s\n", result_str);

	return 0;
}

void str_reverse(char *string, char *result_var)
{
	for (char *p = string + strlen(string) - 1; p >= string - 1; p--) 
		*result_var++ = *p;
}
