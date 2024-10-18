#include <stdio.h>

int main(void){
	int i, j, k;

	i = 1;
	j = 2;
	k = i > j ? i : j;
	k = (i >= 0 ? i: 0) + j;

	printf("aasdf %d\n", k);
}
