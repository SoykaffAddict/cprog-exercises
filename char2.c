#include <stdio.h>

int main(void){
	int i;
	char ch;

	i = 'a';
	ch = 65;
	ch = ch + 1;
	ch++;

	if ('a' <= ch && ch <= 'z'){
		ch = ch - 'a' + 'A';
	}

	printf("%c\n", ch);
}
